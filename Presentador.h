/*
  Archivo: Presentador.h
  Autor: Brayan Sanchez <brayan.sanchez.leon@correounivalle.edu.co>
  Autor: Mayra Alejandra Sanchez Salinas <mayra.alejandra.sanchez@correounivalle.edu.co>
  Fecha creación: 2021-09-08
  Fecha última modificación: 2021-09-18
  Versión: 0.1
  Licencia: GPL
*/

/**
  CLASE: Presentador
  INTENCIÓN: representa un presentador de televisión que tiene un algoritmo que calcula el valor del premio a entregar al azar. Además:
  - le puedo preguntar el nombre
  - le puedo pedir que entregue el premio
  RELACIONES:
  - contiene un nombre
*/

#ifndef PRESENTADOR_HH
#define PRESENTADOR_HH

#include <string>
using namespace std;

class Presentador
{
  protected:
  string nombre;
  
  public:
  /**
   * Construye un presentador
   */
  Presentador();
  /**
   * Destructor. No hace nada.
   */  
  virtual ~Presentador();
  /**
   * Dice cuál es nombre
   */
  virtual string comoTeLlamas();
  /**
   * Retorna el premio a entregar a un concursante
   */
  virtual double entregarPremio() = 0;
};

#else
class Presentador;  // Declaración adelantada
#endif