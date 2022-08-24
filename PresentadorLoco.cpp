/*
  Archivo: PresentadorLoco.cpp
  Autor: Brayan Sanchez <brayan.sanchez.leon@correounivalle.edu.co>
  Autor: Mayra Alejandra Sanchez Salinas <mayra.alejandra.sanchez@correounivalle.edu.co>
  Fecha creación: 2021-09-08
  Fecha última modificación: 2021-09-18
  Versión: 0.1
  Licencia: GPL
*/

#include "PresentadorLoco.h"


PresentadorLoco::PresentadorLoco()
{
  // No hay que hacer nada
}


PresentadorLoco::~PresentadorLoco()
{
  // No hay que hacer nada
}


double PresentadorLoco::entregarPremio()
{
  return 200 * nombre.size();
}