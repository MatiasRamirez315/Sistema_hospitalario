#include "TipoDocumento.h"
#include <string>

void TipoDocumento::setDocumento(string documento){
Documento = documento;
}
void TipoDocumento::setPasaporte(string pasaporte){
Pasaporte = pasaporte;
}

string TipoDocumento::getDocumento(){
return Documento;
}
string TipoDocumento::getPasaporte(){
return Pasaporte;
}
