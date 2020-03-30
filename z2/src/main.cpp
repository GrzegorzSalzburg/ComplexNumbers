#include <iostream>
#include "BazaTestu.hh"
#include "Statystyki.hh"

using std::cout;
using std::endl;
using std::cerr;
using std::cin;

int main(int argc, char **argv)
{
    if (argc < 2) {
    cout << endl;
    cout << " Brak opcji okreslajacej rodzaj testu." << endl;
    cout << " Dopuszczalne nazwy to:  latwy, trudny." << endl;
    cout << endl;
    return 1;
  }


  BazaTestu   BazaT = { nullptr, 0, 0 };
  if (InicjalizujTest(&BazaT,argv[1]) == false) {
    cerr << " Inicjalizacja testu nie powiodla sie." << endl;
    return 1;
  }

  cout << endl;
  cout << " Start testu arytmetyki zespolonej: " << argv[1] << endl;
  cout << endl;

  WyrazenieZesp WyrZ;
  LZespolona Odp;
  Statystyki sta={0,0};
  while (PobierzNastpnePytanie(&BazaT,&WyrZ)) {
    cout << ":? Podaj wynik operacji: "<<WyrZ<<endl;
    for(int i=0; i<3;i++)
    {
      cout <<"Twoja odpowiedz: ";
      cin >>Odp;
      if(cin.bad())
      {
        cout <<"Jeszcze raz ";
      }
      else
      {
        break;
      }
      cin.clear();
      cin.ignore(1024,'\n');
      }
    if(Odp==Oblicz(WyrZ))
    {
      cout<<":) Poprawna odpowiedz"<<endl;
      sta.poprawne++;
      sta.wszystkie++;
    }
    else
    {
      cout<<":( Niepoprawna odpowiedz"<<endl;
      sta.wszystkie++;
    }
  }
  cout << endl;
  cout << "Koniec testu" <<endl;
  
  Wyswietl(sta);
}
    
