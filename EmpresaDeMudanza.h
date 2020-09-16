/*
  Archivo: Camion.h
  Autor: Lina Marcela Rivas Rebolledo <rivas.lina@correounivalle.edu.co>
  Fecha creación: 2020-09-02
  Fecha última modificación: 2020-09-03
  Licencia: GNU-GPL
*/

/*
  Clase: Camion
  Atributos: placa, capacidadMaxima y ptc
  Funcionalidades:
    - Puedo cargar un objeto al camion. 
    - Puedo preguntar cual es su placa.
    - Puedo preguntar cuanto peso llevo cada camion. 
  Relaciones: ninguna
*/

#ifndef EMPRESADEMUDANZA_H      // GUARDA
#define EMPRESADEMUDANZA_H      // GUARDA

#include "Camion.h"
#include<string>
#include<vector>
using namespace std;

class EmpresaDeMudanza
{
  private:
    string nombre;
    string nit;
    vector <Camion> flotaDeCamiones;

  public:
    EmpresaDeMudanza(string nombre, string nit);
    ~EmpresaDeMudanza();
    virtual void comprarCamion(Camion camion);
    virtual Camion getCamion(int i);
    virtual vector<Camion> retornarflotaCamiones();
    virtual int cantidadCamiones();
    virtual void trasnportarPaquetes(vector <int>);
};


#else    
class EmpresaDeMudanza;  
#endif      