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

#ifndef CAMION_H      // GUARDA
#define CAMION_H      // GUARDA

#include<string>
using namespace std;
/*
class Camion
{
  protected:
    string placa;
    int capacidad;

  public:
  */
    /**
      Constructor. Da valores iniciales a los atributos internos
    */
    //Camion(string placa, int capacidad);
    /**
      Destructor. No hace nada
    */
    //virtual ~Camion();
    /**
      Pregunta y retorna su nombre.
    */
    //virtual string cualEsLaPlaca();
    /**
      Pregunta y retorna su edad.
    */
    /*virtual bool cargaUnObjeto(int ciertoObjeto);*/
    /**
      Pregunta y retorna su estatura.
    */
    //virtual int hacerMudanza();
    /**
      Averigua si es mayor que una edad dada. Por defecto, 18 años.
    */
    //virtual bool esMenorQue(int edad=18);
    /**
      Averigua si es más alto que una cierta altura.
    */
    //virtual bool esMasAltoQue(double ciertaEstatura);
//};

class Camion
{
  private:
    string placa;
    int capacidadMaxima;
    int pesoQueTransporta;
    
  public:
   /**
    * Constructor. Da valores iniciales a los atributos internos
   */
    Camion(string laPlaca, int laCapacidadMaxima);
    /**
     * carga un objeto al camion si el peso del objeto no supera su capacidad maxima
     */
     
   virtual  bool cargarUnObjeto(int pesoDelObjeto);  // true = se pudo hacer; false = no se pudo
   virtual int hacerMudanza();  // Retorna la carga que transportó
   virtual string cualEsLaPlaca(); // pregunta y retorna la placa 
};


#else      // GUARDA
class Camion; // Declaración adelantada      // GUARDA
#endif      // GUARDA
