/*
  Archivo: Amigo.cpp
  Autor: 
  
  Fecha creación: 2019-05-18
  Fecha última modificación: 2019-05-18
  Licencia: GNU-GPL
*/

#include"Camion.h"

Camion::Camion(string laPlaca, int laCapacidadMaxima)
{
  this -> placa = laPlaca;  
  this -> capacidadMaxima = laCapacidadMaxima;
  this -> pesoQueTransporta = 0; 
}


bool Camion::cargarUnObjeto(int pesoDelObjeto) 
{
  if(pesoQueTransporta + pesoDelObjeto <= capacidadMaxima) 
  {
    pesoQueTransporta = pesoQueTransporta + pesoDelObjeto;
  return true;
  }
  else
    return false;
}


int Camion::hacerMudanza()
{  
  return pesoQueTransporta; 
} 
string Camion::cualEsLaPlaca()
{  
  return placa; 
}

