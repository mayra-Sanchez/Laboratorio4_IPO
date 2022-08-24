/*
  Archivo: PresentadorIdeasFijas.h
  Autor: Brayan Sanchez <brayan.sanchez.leon@correounivalle.edu.co>
  Autor: Mayra Alejandra Sanchez Salinas <mayra.alejandra.sanchez@correounivalle.edu.co>
  Fecha creación: 2021-09-08
  Fecha última modificación: 2021-09-18
  Versión: 0.1
  Licencia: GPL
*/

/**
  CLASE: PresentadorIdeasFijas
  INTENCIÓN: representa un presentador de televisión que hereda la parte publica de Presentador. Tiene un algoritmo que calcula el valor del premio a entregar al azar. Además:
  - le puedo preguntar el nombre
  - le puedo pedir que entregue el premio
  RELACIONES:
  - Es un presentador
*/

#ifndef PRESENTADORIDEASFIJAS_HH
#define PRESENTADORIDEASFIJAS_HH

#include "Presentador.h"
using namespace std;

class PresentadorIdeasFijas : public Presentador
{
  public:
  /**
   * Construye un presentador de ideas fijas (ese va a ser su nombre)
   */
  PresentadorIdeasFijas();
  /**
   * Destructor. No hace nada.
   */  
  virtual ~PresentadorIdeasFijas();
  /**
   * Retorna el premio a entregar a un concursante (concretamente, 100 bitcoins)
   */
  virtual double entregarPremio();
};

#else
class PresentadorIdeasFijas;  // Declaración adelantada
#endif