#include <iostream>
using namespace std;

int main ()
{
  char c;   //il char è un numero di un byte

  cout<<"Scrivi un caratttere: ";
  cin>>c;

  if ( c >= 'A'&& c <= 'Z')     //ASCII American Standard Code for Information Interchange
    cout<<"Hai scritto una lettera maiuscola\n";
  else
    cout<<"Non hai scritto una lettera maiuscola\n";


    return 0;     // se scrivo !___ nel cmd cerca l'ultimo comando con la lettera iniziale dopo il punto esclamativo
}
