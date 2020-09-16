/*
  Archivo: Amigo.cpp
  Autor: 
  
  Fecha creación: 2019-05-18
  Fecha última modificación: 2019-05-18
  Licencia: GNU-GPL
*/
#include "EmpresaDeMudanza.h"
#include "Camion.h"
#include <iostream>
#include <vector>
using namespace std;

EmpresaDeMudanza::EmpresaDeMudanza(string nombre, string nit)
{
   this-> nombre = nombre;
   this-> nit = nit;
   flotaDeCamiones = {};
}

EmpresaDeMudanza::~EmpresaDeMudanza()
{
  //No hace nada
}

void EmpresaDeMudanza::comprarCamion(Camion camion)
{
  flotaDeCamiones.push_back(camion);
}

vector<Camion> EmpresaDeMudanza::retornarflotaCamiones()
{
  return flotaDeCamiones;
}

Camion EmpresaDeMudanza::getCamion(int i)
{
  return flotaDeCamiones[i];
}

int EmpresaDeMudanza::cantidadCamiones()
{
  return flotaDeCamiones.size();
}

void EmpresaDeMudanza::trasnportarPaquetes(vector <int> objetos)
{
  for(int cualObjeto = 0; cualObjeto < objetos.size(); cualObjeto++)
  {
    //Pensar logica del problema
    int objetoATransportar = objetos[cualObjeto];
    if(not flotaDeCamiones[0].cargarUnObjeto(objetoATransportar))
      if(not flotaDeCamiones[1].cargarUnObjeto(objetoATransportar))
        if(not flotaDeCamiones[2].cargarUnObjeto(objetoATransportar))
          if(not flotaDeCamiones[3].cargarUnObjeto(objetoATransportar))
            if(not flotaDeCamiones[4].cargarUnObjeto(objetoATransportar))
                cout << "El objeto número " << cualObjeto << " que pesa " << objetos[cualObjeto] << " no se puede cargar en ningún camión." << endl;
  }
/*
  cout<<"El camión transportó "<<flotaDeCamiones[0].hacerMudanza()<<" kg."<<endl;
  cout<<"El camión transportó "<<flotaDeCamiones[1].hacerMudanza()<<" kg."<<endl;
cout<<"El camión transportó "<<flotaDeCamiones[2].hacerMudanza()<<" kg."<<endl;
cout<<"El camión transportó "<<flotaDeCamiones[3].hacerMudanza()<<" kg."<<endl;
cout<<"El camión transportó "<<flotaDeCamiones[4].hacerMudanza()<<" kg."<<endl;
*/
int totalTransportado = 0;
int camiones = flotaDeCamiones.size ();
 for(int i=0;i<camiones; i= i+1 )
   {
     
      totalTransportado = totalTransportado + flotaDeCamiones[i].hacerMudanza ();
    
   }
cout<<"El total trasportado fue de " <<totalTransportado <<" kg"<<endl;
}