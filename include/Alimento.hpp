#pragma once
class Alimento
{
private:
    int Energia;

public:
    Alimento(int Energia)
    {
        this->Energia = Energia;
    }
    int ExtraesEnergia()
    {
        return this->Energia;
    }
    ~Alimento() {}
};