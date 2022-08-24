/*
  Archivo: Presentador.cpp
  Autor: Brayan Sanchez <brayan.sanchez.leon@correounivalle.edu.co>
  Autor: Mayra Alejandra Sanchez Salinas <mayra.alejandra.sanchez@correounivalle.edu.co>
  Fecha creación: 2021-09-08
  Fecha última modificación: 2021-09-18
  Versión: 0.1
  Licencia: GPL
*/

#include "Presentador.h"


Presentador::Presentador() : nombre("loco")
{
  // No hay que hacer nada
}


Presentador::~Presentador()
{
  // No hay que hacer nada
}

string Presentador::comoTeLlamas()
{
  return nombre;
}