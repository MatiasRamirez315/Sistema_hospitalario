#include "Tiempo.h"

Tiempo::Tiempo(int h, int m, int s) {
    horas = h;
    minutos = m;
    segundos = s;
}

void Tiempo::setHoras(int h) {
    horas = h;
}

void Tiempo::setMinutos(int m) {
    minutos = m;
}

void Tiempo::setSegundos(int s) {
    segundos = s;
}

int Tiempo::getHoras() {
    return horas;
}

int Tiempo::getMinutos() {
    return minutos;
}

int Tiempo::getSegundos() {
    return segundos;
}
