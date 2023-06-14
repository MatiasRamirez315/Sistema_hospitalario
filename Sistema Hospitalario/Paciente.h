#ifndef PACIENTE_H
#include <iostream>
#include <string>
using namespace std;
#include "Persona.h"
#include "Fecha.h"
#include "Tiempo.h"
class Paciente:public Persona{
private:

	string diagnostico;
	string factorSanguineo;
	float altura;
	float pesaje;
	Fecha fechaOperacion();
	Fecha fechaAlta();
	int NroHabitacion();
	string Patologia();
	Tiempo tiempoProcedimiento();
	string HistorialClinico();


public:
	void setDiagnostico(string d);
	void setfactorSanguineo(string FactorS);
	void setAltura(float alt);
	void setPeso(float pes);
	void setFechaOperacion(Fecha fechaOp);
	void setFechaAlta(Fecha FA);
	void setNroHabitacion(int NH);
	void setPatologia(string pato);
	void setTiempoProcediemiento(Tiempo tiempo);
	void setHistorialClinico(string HC);

	string getDiagnostico();
	string getfactorSanguineo();
	float getAltura();
	float getPeso();
	Fecha getFechaOperacion();
	Fecha getFechaAlta();
	int getNroHabitacion();
	string getPatologia();
	Tiempo getTiempoProcediemiento();
	string getHistorialClinico();

};

#endif // PACIENTE_H
