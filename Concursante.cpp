/*
  Archivo: Concursante.cpp
  Autor: Brayan Sanchez <brayan.sanchez.leon@correounivalle.edu.co>
  Autor: Mayra Alejandra Sanchez Salinas <mayra.alejandra.sanchez@correounivalle.edu.co>
  Fecha creación: 2021-09-08
  Fecha última modificación: 2021-09-10
  Versión: 0.1
  Licencia: GPL
*/

#include "Concursante.h"


Concursante::Concursante(string nombre)
  : nombre(nombre), bitcoinsDePremio(0)
{
}


Concursante::~Concursante()
{
}


string Concursante::comoTeLlamas()
{
  return nombre;
}


double Concursante::quePremioTeDieron()
{
  return bitcoinsDePremio;
}


void Concursante::recibirPremio(double bitcoinsDePremio)
{
  this->bitcoinsDePremio += bitcoinsDePremio;
}