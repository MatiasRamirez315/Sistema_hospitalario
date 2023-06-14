#ifndef TIEMPO_H
#define TIEMPO_H


class Tiempo
{
private:
  int horas;
  int minutos;
  int segundos;
public:
  Tiempo(int h, int m, int s);

  void setHoras(int h);
  void setMinutos(int m);
  void setSegundos(int s);
  int getHoras();
  int getMinutos();
  int getSegundos();

};

#endif // TIEMPO_H
