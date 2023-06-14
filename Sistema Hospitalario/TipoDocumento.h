#include <iostream>

using namespace std;
#include <string>

class TipoDocumento{

 private:
    string Pasaporte;
    string Documento;

  public:
    void setPasaporte(string pasaporte);
    void setDocumento(string Documento);

    string getPasaporte();
    string getDocumento();
};
