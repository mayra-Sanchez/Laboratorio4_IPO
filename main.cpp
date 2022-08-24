/*
  Archivo: Main.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2020-10-24
  Fecha última modificación: 2020-10-25
  Versión: 0.1
  Licencia: GPL
*/

/*
  HISTORIA: 
  Estamos en el concurso de televisión ¿Quieres ser trillonario? Los ganadores están en fila para recibir el premio El premio, y también hay una fila de presentadores para entregarlos. Hay distintos tipos de presentadores:
    • El presentador de ideas fijas: siempre da como premio 100 bitcoins.
    • El presentador aleatorio: entrega una cantidad al azar entre 0 y 300.
    • El presentador loco: el premio es el número de letras de su nombre multiplicado por 200.

Supongamos que en la fila de ganadores están: primero Sofía, luego luego Esteban, Antonio, Rosita, Ana y Rosendo. Y en la fila de presentadores entregando premios primero hay un ideasFijas, luego un loco, luego aleatorio y luego otro aleatorio. Cuando se acaban los presentadores y se necesitan más, se vuelve a comenzar desde el primero. Después de la entrega de premios, cada concursante dice lo que le dieron de premio.
*/


#include "Concurso.h"
#include "Concursante.h"
#include "PresentadorIdeasFijas.h"
#include "PresentadorAleatorio.h"
#include "PresentadorLoco.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
  srand(time(0));

  Concurso concurso("¿Quieres ser trillonario?");
  vector<string> nombresPersonas = {"Sofía", "Esteban", "Antonio", "Rosita", "Ana", "Rosendo" };
  vector<Presentador *> losPresentadores = 
  {
    new PresentadorIdeasFijas(), 
    new PresentadorLoco(), 
    new PresentadorAleatorio(), 
    new PresentadorAleatorio(),
  };
  
  for(int cualPersona = 0; cualPersona < nombresPersonas.size(); cualPersona++)
    concurso.nuevoConcursante(new Concursante(nombresPersonas[cualPersona]));
    
  for(int cualPresentador = 0; cualPresentador < losPresentadores.size(); cualPresentador++)
    concurso.nuevoPresentador(losPresentadores[cualPresentador]);

  concurso.entregarPremios();
  
  cout << concurso.mostrarPremiosDeConcursantes() << endl;
  
  return 0;
}