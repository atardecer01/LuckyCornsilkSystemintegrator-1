/*
  Archivo: Main.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2018-02-13
  Fecha última modificación: 2018-02-22
  Versión: 0.1
  Licencia: GPL
*/

// Ejemplo con una clase y dos objetos.
// Utilidad: Hacer una mudanza. Vamos a modelar un camión para transportar mis objetos, 
// que tienen distintos pesos.
// El camión tiene un número de placa y una capacidad máxima. Si se supera esa 
// capacidad, me avisará, para que el objeto que intento subir lo guarde en el otro
// camión.

#include "Camion.h"
#include "EmpresaDeMudanza.h"
#include <vector>
#include <iostream>

using namespace std;

int main()
{
  //Creación objeto EmpresaDeMudanza
  EmpresaDeMudanza empresa("Easy Mudanza", "123.456.789");

  //Creación objetos Camión
  Camion camionUno("ABC-001", 10000);
  Camion camionDos("DEF-002", 3500);
  Camion camionTres("GHI-003",8500);
  Camion camionCuatro("JKL-004",2000);
  Camion camionCinco("MNÑ-005",50);

  //Comprar Flota de Camiones
  empresa.comprarCamion(camionUno);
  empresa.comprarCamion(camionDos);
  empresa.comprarCamion(camionTres);
  empresa.comprarCamion(camionCuatro);
  empresa.comprarCamion(camionCinco);

cout<<"La empresa dispone de una flota de "<< empresa.cantidadCamiones() <<endl;

//Reemplazando el array de objetos por un vector de objetos
vector<int> objetos = { 1000, 3000, 5000, 2000, 500, 1800, 4000, 30 };


empresa.trasnportarPaquetes(objetos);

  return 0;
}