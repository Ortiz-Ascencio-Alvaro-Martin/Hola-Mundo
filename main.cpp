#include <iostream>
#include <list>
#include <Mascota.hpp>
#include <Alimento.hpp>
// using namespace std;

int main(int argc, char const *argv[])
{
  std::list<Mascota> mascotas;

  Alimento a1(5);
  Alimento a2(2);
  Mascota m1("mollete");
  Mascota m2("Tai");

  mascotas.push_back(m1);
  mascotas.push_back(m2);

  /*m1.Comer(a1);
  m1.Comer(a2);
  m1.Jugar();

  m2.Jugar();
  m1.Comer(a2);*/

  for (auto &&mascota : mascotas)
  {
    std::cout
        << mascota.LeerNombre()
        << m1.LeerEnergia()
        << std::endl;
    //<<"Mascota 2 Energia: "<<m2.LeerEnergia()<< std::endl;
  }

  return 0;
}
