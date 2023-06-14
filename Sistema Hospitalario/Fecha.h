#ifndef FECHA_H
#define FECHA_H
#include <iostream>
using namespace std;
#include <cstring>

class Fecha{
 private:
   int _dia, _mes, _anio;

   void establecerFechaPorDefecto();


   public:
      Fecha();
      Fecha(int dia, int mes, int anio);

      int getDia();
      int getMes();
      int getAnio();
      void agregarDias(int cantidadDias);
      string toString(string formatoFecha = "DD/MM/YYYY");
};

#endif // FECHA_H
