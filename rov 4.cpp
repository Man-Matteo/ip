#include <iostream>

using namespace std;

int main ()
{
  long double a,b,c,d,e,f,g;
  int *p1;
  int *p2;

  cout << "p1 = " << p1 << endl;
  cout << "p2 = " << p2 << endl;
  cout << "contenuto della memoria puntata da p1 = " << *p1 << endl;
  cout << "contenuto della memoria puntata da p2 = " << *p2 << endl;
  p1 = nullptr;  //non sta puntando a 0, ma è un indirizzo non valido
  cout << "p1 dopo averlo fatto puntare a nullptr = " << p1 << endl;  //stampa un errore di segmentazione, tipico dei puntatori 
}
