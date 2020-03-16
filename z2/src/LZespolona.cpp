#include "LZespolona.hh"

bool wczytaj(LZespolona &  z){
  char znak;
  cin>>znak;
    if(znak!='(')
     return false;
        cin>>z.re>>z.im;
        if(cin.bad())
        return false;
           cin>>znak;
           if (znak!='i')
	         return false ;
           cin>>znak;
         if (znak!=')')
	   return false;
    return true;
}

std::ostream & operator <<(std::ostream &wyj, LZespolona Skl1)
{
   wyj<<"("<<Skl1.re<<showpos<<Skl1.im<<noshowpos<<"i)";
   return wyj;
}

std::istream & operator >> (std::istream &wej, LZespolona & Skl1)
{
   char znak;
   wej>>znak;
   if(znak!='(')
   {
     wej.setstate(ios_base::badbit);
   }
        wej>>Skl1.re>>Skl1.im;
        wej>>znak;
          if (znak!='i')
            {
              wej.setstate(ios_base::badbit);
            }
        wej>>znak;
          if (znak!=')')
            {
               wej.setstate(ios_base::badbit);
            }
	 return wej;
}

void Wyswietl(LZespolona Skl)
{
  cout<<"("<<Skl.re<<showpos<<Skl.im<<noshowpos<<"i)";
}

/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;
  return Wynik;
}
/*!
 * Realizuje odejmowanie  dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik odejmowania,
 *    Skl2 - drugi skladnik odejmowania.
 * Zwraca:
 *    Roznice dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re - Skl2.re;
  Wynik.im = Skl1.im - Skl2.im;
  return Wynik;
}
/*!
 * Realizuje mnozenie  dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik mnozenia,
 *    Skl2 - drugi skladnik mnozenia.
 * Zwraca:
 *    Iloczyn dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re*Skl2.re-Skl1.im*Skl2.im;
  Wynik.im = Skl1.re*Skl2.im+Skl1.im*Skl2.re;
  return Wynik;
}
/*!
 * Realizuje sprzezenie  dwoch liczb zespolonych.
 * Argumenty:
 *    Skl - skladnik sprzezenia,
 * Zwraca:
 *    Sprzezenie skladnika podanego jako parametr.
 */
LZespolona Sprzezenie(LZespolona Skl)
{
  Skl.im=-Skl.im;
  return Skl;
}
/*!
 * Realizuje modul podniesiony do kwadratu.
 * Argumenty:
 *    Skl - skladnik tej funkcji,
 * Zwraca:
 *    Modul podniesiony do kwadratu skladnika podanego jako parametr.
 */
double Modul2(LZespolona Skl)
{
  return Skl.im*Skl.im+Skl.re*Skl.re;
}

LZespolona  operator / (LZespolona  Skl1,  double  Skl2)
{
    LZespolona  Wynik;

  Wynik.re = Skl1.re/Skl2;
  Wynik.im = Skl1.im/Skl2;
  return Wynik;
}

LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2)
{
  return (Skl1*Sprzezenie(Skl2))/Modul2(Skl2);
}