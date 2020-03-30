#ifndef STATYSTYKI_HH
#define STATYSTYKI_HH
#include <iostream>

struct Statystyki
{
    unsigned int poprawne;
    unsigned int wszystkie;
};

void Wyswietl(Statystyki sta);
#endif