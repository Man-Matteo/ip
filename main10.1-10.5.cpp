#include <iostream>
#include "es10.1-10.5.h"

using namespace std;

int main ()
{
  list mylist;
  int val, pos;
  cout << "Primo valore della lista: ";
  cin >> val;
  mylist = newcell (val);

  cout << "Altro valore della lista (ins. da testa): ";
  cin >> val;
  push_front(mylist,val);

  cout << "Altro valore della lista (ins. da coda): ";
  cin >> val;
  push_back(mylist,val);

  cout << "Altro valore della lista (valore, posizione): ";
  cin >> val;
  cin >> pos;
  insert_after(mylist, val, pos);

  print (mylist);
  cout << "La tua lista ha " << length(mylist) << " elementi.";


  cout << "Elimino la lista";
  clear (mylist);
}
