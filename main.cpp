#include <iostream>
#include <Mascota.hpp>
#include <Alimento.hpp>
using namespace std;



int main(int argc, char const *argv[])
{
    Alimento a1(5);
    Alimento a2(2);
    Mascota m1;
    Mascota m2;

    m1.Comer(a1);
    m1.Comer(a2);
    m1.Jugar();

    m2.Jugar();
    m1.Comer(a2);


      cout<<"Mascota 1 Energia: "<<m1.LeerEnergia()<< endl
          <<"Mascota 2 Energia: "<<m2.LeerEnergia()<< endl;      

return 0;

}
