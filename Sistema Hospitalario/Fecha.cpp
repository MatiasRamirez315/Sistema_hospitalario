#include <iostream>

using namespace std;
#include "Fecha.h"
#include <string>

void Fecha::establecerFechaPorDefecto(){
   _dia = 1;
   _mes = 1;
   _anio = 1900;
}



Fecha::Fecha(){
   establecerFechaPorDefecto();
}

Fecha::Fecha(int dia, int mes, int anio){
   _dia = dia;
   _mes = mes;
   _anio = anio;

   if (_dia <= 0 || _mes <= 0 || _anio <= 0 || _mes > 12){
      establecerFechaPorDefecto();
   }
   else{
      int dias[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
      if (esBisiesto()){
         dias[1]++;
      }

      if (_dia > dias[_mes-1]){
         establecerFechaPorDefecto();
      }
   }
}

int Fecha::getDia(){
   return _dia;
}
int Fecha::getMes(){
   return _mes;
}
int Fecha::getAnio(){
   return _anio;
}



string Fecha::toString(string formatoFecha){
   string fechaFormateada = "";

   string DD = to_string(_dia);
   string MM = to_string(_mes);
   string YYYY = to_string(_anio);
   // DD/MM/YYYY
   if (_dia < 10){
      DD = "0" + to_string(_dia);
   }
   if (_mes < 10){
      MM = "0" + to_string(_mes);
   }

   if (formatoFecha == "DD/MM/YYYY"){
      fechaFormateada = DD + "/" + MM + "/" + YYYY;
   }
   else if (formatoFecha == "YYYY/MM/DD"){
      fechaFormateada = YYYY + "/" + MM + "/" + DD;
   }
   else{
      fechaFormateada = DD + "/" + MM + "/" + YYYY;
   }

   return fechaFormateada;
}
