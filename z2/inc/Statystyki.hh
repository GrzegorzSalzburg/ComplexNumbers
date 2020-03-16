#ifndef STATYSTYKI_HH
#define STATYSTYKI_HH
#include <iostream>

struct Statystyki
{
    unsigned int Porpawne;
    unsigned int Bledne;
    double Procent;
};

void Wyswietl(Statystyki sta);
#endif