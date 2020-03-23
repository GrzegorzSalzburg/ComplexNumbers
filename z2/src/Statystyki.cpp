#include "Statystyki.hh"

void Wyswietl(Statystyki sta)
{
    std::cout<<"Statystyka odpowiedzi:"<<std::endl;
    std::cout<<"Odpowiedzi poprawne: "<<" "<<sta.poprawne<< std::endl;
    std::cout<<"Odpowiedzi negatywne: "<<" "<<sta.bledne<< std::endl;
    std::cout<<"Wynik procentowy: "<<" "<<sta.Procent<<"%"<< std::endl;
}