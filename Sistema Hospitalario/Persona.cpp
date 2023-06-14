#include <iostream>
using namespace std;
#include "Persona.h"
#include "Fecha.h"
#include "cstring"

void Persona::setApellido(string apellido){
_apellido=apellido;
}
void Persona::setNombre(string nombre){
_nombre=nombre;
}
void Persona::setID(int id){
_id=id;
}
void Persona::setEmail(string email){
_mail = email;
}
void Persona::setEstado(bool estado){
_estado = estado;
}
void Persona::setFechaAlta(Fecha fechaAlta){
_fechaAlta = fechaAlta;
}
void Persona::setFechaBaja(Fecha fechaBaja){
_fechaBaja= fechaBaja;
}
void Persona::setFechaNacimiento(Fecha fechaNacimiento){
_fechaNac=fechaNacimiento;
}
void Persona::setGenero(string genero){
_genero = genero;
}
void Persona::setDni(int dni){
_dni=dni;
}
int Persona::getDni(){
return _dni;
}
string Persona::getNombre(){
return _nombre;
}
string Persona::getApellido(){
return _apellido;
}
bool Persona::getEstado(){
return _estado;
}
int Persona::getID(){
return _id;
}
string Persona::getEmail(){
return _mail;
}
string Persona::getGenero(){
return _genero;
}
Fecha Persona::getFechaAlta(){
return _fechaAlta;
}
Fecha Persona::getFechaBaja(){
return _fechaBaja;
}
Fecha Persona::getFechaNacimiento(){
return _fechaNac;
}
/*bool _estado;
	string _genero;-
	int _dni;-
	Fecha _fechaAlta;-
	Fecha _fechaBaja;-
	Fecha _fechaNac;-
	string _nombre;-
	string _apellido;-
	int _id;-
	string _mail;-
	*/
void Persona::Mostrar(){
cout<<"Nombre : " << _nombre<<endl;
cout<<"Apellido : "<< _apellido <<endl;
cout << "Genero: " << _genero<<endl;
cout<<"DNI : "<< _dni <<endl;
cout << "ID: " << _id <<endl;
cout << "Email: " << _mail <<endl;
cout << "Fecha de Nacimiento : ";
cout << "Fecha de Alta: ";
cout << "Fecha de baja: ";
}
