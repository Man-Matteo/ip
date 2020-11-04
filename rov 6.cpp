#include <iostream>
using namespace std;

int main ()
{
  int var = 10;
  int *p;

  cout << "All'inizio var = " << var << " e il suo indirizzo è: " << &var << endl;
  cout << "All'inizio p = " << p << " e il contenuto della memoria puntata è: " << *p << endl;
  p = &var;
  cout << "Dopo l'assegnazione, p vale " << p << " e il contenuto della memoria puntata è: " << *p << endl;
  *p = 1;
  cout << "Dopo l'assegnazione, il contenuto della memoria puntata da p è: " << *p << endl;
  cout << "Ora var vale: " << var << endl;
}
