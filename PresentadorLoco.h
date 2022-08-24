/*
  Archivo: PresentadorLoco.h
  Autor: Brayan Sanchez <brayan.sanchez.leon@correounivalle.edu.co>
  Autor: Mayra Alejandra Sanchez Salinas <mayra.alejandra.sanchez@correounivalle.edu.co>
  Fecha creación: 2021-09-08
  Fecha última modificación: 2021-09-18
  Versión: 0.1
  Licencia: GPL
*/

/**
  CLASE: PresentadorLoco
  INTENCIÓN: representa un presentador de televisión que hereda la parte publica de Presentador. Tiene un algoritmo que calcula el valor del premio a entregar al azar. Además:
  - le puedo pedir que entregue el premio
  RELACIONES:
  - Es un presentador
*/

#ifndef PRESENTADORLOCO_HH
#define PRESENTADORLOCO_HH

#include "Presentador.h"
using namespace std;

class PresentadorLoco : public Presentador
{
  public:
  /**
   * @brief Construye un presentador aleatorio (ese va a ser su nombre)
   */
  PresentadorLoco();
  /**
   * @brief Destructor. No hace nada.
   */  
  virtual ~PresentadorLoco();
  /**
   * @brief Retorna el premio a entregar a un concursante (concretamente, el número de letras de su nombre multiplicado por 200)
   */
  virtual double entregarPremio();
};

#else
class PresentadorLoco;  // Declaración adelantada
#endif