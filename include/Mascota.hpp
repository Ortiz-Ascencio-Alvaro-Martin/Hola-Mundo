#pragma once
#include <Alimento.hpp>
class Mascota
{
private:
    // Implementacion oculta
    int Energia;
    int Felicidad;
public:
    Mascota(/* args */) {
        this->Energia = 0;
        this->Felicidad = 0;
    }
    ~Mascota() {}
    void Comer(Alimento alimento){
        Energia += alimento.ExtraesEnergia();
    }
    void Jugar(){
        Energia-=1;
        Felicidad+=1;
    }
    int LeerEnergia(){
        return this->Energia;
    }
    int LeerFelicidad(){
        return this->Felicidad;
    }
};