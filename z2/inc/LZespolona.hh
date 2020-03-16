#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH
#include <iostream>
using namespace std;
/*!
 *  Plik zawiera definicje struktury LZesplona oraz zapowiedzi
 *  przeciazen operatorow arytmetycznych dzialajacych na tej 
 *  strukturze.
 */
/*!Modeluje pojecie liczby zespolonej*/
struct  LZespolona {
  double   re;    /*! Pole repezentuje czesc rzeczywista. */
  double   im;    /*! Pole repezentuje czesc urojona. */
};

LZespolona Sprzezenie(LZespolona );
double Modul2(LZespolona );
bool wczytaj(LZespolona &z);
void Wyswietl(LZespolona Skl);


/*Zapowiedzi definicji przeciazen operatorow*/
std::ostream & operator <<(std::ostream &wyj, LZespolona Skl1);
std::istream & operator >> (std::istream &wej, LZespolona & Skl1);


LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator / (LZespolona  Skl1,  double  Skl2);
#endif
