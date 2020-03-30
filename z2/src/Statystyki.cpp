#include "Statystyki.hh"

void Wyswietl(Statystyki sta)
{
    std::cout<<"Statystyka odpowiedzi:"<<std::endl;
    std::cout<<"Odpowiedzi poprawne: "<<" "<<sta.poprawne<< std::endl;
    std::cout<<"Odpowiedzi negatywne: "<<" "<<sta.wszystkie-sta.poprawne<< std::endl;
    std::cout<<"Wynik procentowy: "<<" "<<sta.poprawne*100.0/sta.wszystkie<<"%"<< std::endl;
}