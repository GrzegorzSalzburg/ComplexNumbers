#include "WyrazenieZesp.hh"
/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */
std::ostream & operator <<(std::ostream &wyj, WyrazenieZesp  WyrZ)
{
  
      wyj<<WyrZ.Arg1;
    switch(WyrZ.Op)
    {
    case Op_Dodaj:
      wyj<<"+";
      break;
    case Op_Odejmij:
        wyj<<"-";
      break;
    case Op_Mnoz:
        wyj<<"*";
      break;
    case Op_Dziel:
  wyj<<"/";
      break;
    }
     wyj<<WyrZ.Arg2;
     return wyj;
}

void Wyswietl(WyrazenieZesp WyrZ)
{
  Wyswietl(WyrZ.Arg1);
    switch(WyrZ.Op)
    {
    case Op_Dodaj:
      std::cout<<"+";
      break;
    case Op_Odejmij:
         std::cout<<"-";
      break;
    case Op_Mnoz:
         std::cout<<"*";
      break;
    case Op_Dziel:
   std::cout<<"/";
      break;
    }
      Wyswietl(WyrZ.Arg2);
}

bool Wczytaj(WyrazenieZesp  &WyrZ)
{
  if(!wczytaj(WyrZ.Arg1))
  {
      return false;
  }
  char znak;
  cin>>znak;
    switch(znak)
    {
    case '+':
        WyrZ.Op=Op_Dodaj;
      break;
    case '-':
        WyrZ.Op=Op_Odejmij;
      break;
    case '*':
        WyrZ.Op=Op_Mnoz;
      break;
    case '/':
        WyrZ.Op=Op_Dziel;
      break;
      
      default:
      return false;
    }
  if(!wczytaj(WyrZ.Arg2))
   {
      return false;
   }
   return true;
}

LZespolona Oblicz(WyrazenieZesp Wyrz)
{
  LZespolona Wyn;
  switch(Wyrz.Op)
    {
    case Op_Dodaj:
      Wyn=Wyrz.Arg1+Wyrz.Arg2;
      break;
    case Op_Odejmij:
      Wyn=Wyrz.Arg1-Wyrz.Arg2;
      break;
    case Op_Mnoz:
      Wyn=Wyrz.Arg1*Wyrz.Arg2;
      break;
    case Op_Dziel:
      Wyn=Wyrz.Arg1/Wyrz.Arg2;
      break;
    }
}

	




