/*
  Archivo: Concursante.h
  Autor: Brayan Sanchez <brayan.sanchez.leon@correounivalle.edu.co>
  Autor: Mayra Alejandra Sanchez Salinas <mayra.alejandra.sanchez@correounivalle.edu.co>
  Fecha creación: 2021-09-08
  Fecha última modificación: 2021-09-10
  Versión: 0.1
  Licencia: GPL
*/

/**
  CLASE: Concursante
  INTENCIÓN: representa un concursante ganador de un concurso de televisión que va a recibir su premio. Además:
  - le puedo solicitar que reciba el premio
  - le puedo preguntar su nombre y el premio recibido
  RELACIONES:
  - contiene un nombre
  - contiene el premio que reciba, en bitcoins
*/

#ifndef CONCURSANTE_HH
#define CONCURSANTE_HH

#include <string>
using namespace std;

class Concursante
{
  protected:
  string nombre;
  double bitcoinsDePremio;
  
  public:
  /**
   * Construye un Concursante con un nombre. Inicialmente no tiene ningún premio.
   */
  Concursante(string nombre);
  /**
   * Destructor. No hace nada.
   */
  virtual ~Concursante();
  /**
   * Dice cuál es nombre
   */
  virtual string comoTeLlamas();
  /**
   * Dice cuál fue el premio que recibió
   */
  virtual double quePremioTeDieron();
  /**
   * Recibe el premio del concurso (una cierta cantidad de bitcoins)
   */
  virtual void recibirPremio(double bitcoinsDePremio);
};

#else
class Concursante;  // Declaración adelantada
#endif