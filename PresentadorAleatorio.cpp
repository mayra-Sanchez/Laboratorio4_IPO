/*
  Archivo: PresentadorAleatorio.cpp
  Autor: Brayan Sanchez <brayan.sanchez.leon@correounivalle.edu.co>
  Autor: Mayra Alejandra Sanchez Salinas <mayra.alejandra.sanchez@correounivalle.edu.co>
  Fecha creación: 2021-09-08
  Fecha última modificación: 2021-09-18
  Versión: 0.1
  Licencia: GPL
*/

#include "PresentadorAleatorio.h"


PresentadorAleatorio::PresentadorAleatorio()
{
  // No hay que hacer nada
}


PresentadorAleatorio::~PresentadorAleatorio()
{
  // No hay que hacer nada
}


double PresentadorAleatorio::entregarPremio()
{
  return rand()%300;
}