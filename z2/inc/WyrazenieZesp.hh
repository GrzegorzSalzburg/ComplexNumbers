#ifndef WYRAZENIEZESP_HH
#define WYRAZENIEZESP_HH
#include "LZespolona.hh"


/*! Modeluje zbior operatorow arytmetycznych.*/
enum Operator { Op_Dodaj, Op_Odejmij, Op_Mnoz, Op_Dziel };



/* Modeluje pojecie dwuargumentowego wyrazenia zespolonego*/
struct WyrazenieZesp {
  LZespolona   Arg1;   // Pierwszy argument wyrazenia arytmetycznego
  Operator     Op;     // Opertor wyrazenia arytmetycznego
  LZespolona   Arg2;   // Drugi argument wyrazenia arytmetycznego
};


/* Funkcje ponizej nalezy zdefiniowac w module.*/
void Wyswietl(WyrazenieZesp  WyrZ);
bool Wczytaj(WyrazenieZesp  &WyrZ);
LZespolona Oblicz(WyrazenieZesp  WyrZ);
std::ostream & operator <<(std::ostream &wyj, WyrazenieZesp  WyrZ);
#endif


/* 8+7i  7.98+7i   a.im==b.im  abs(a.im-b.im)<0.1->Epsilon blad dopuszczalny*/