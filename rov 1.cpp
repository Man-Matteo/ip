#include <iostream>            //non sto includendo una libreria, ma sto includendo le funzioni di cui il programma ha bisogno per usare elementi della libreria
using namespace std;

void hello (){
  cout << "Hello world \n";
}

void hellomany (int n){       //n è come se fosse già dichiarata all'interno della funzione e non devo dargli una valore
  cout << "Hello, we are " << n << "! \n";
}

int givemefive (){            //non riceve argomento, ma restituisce un intero
  return 5;                   //restituisce 5
}

int prossimo (int i){         //riceve un valore e ne restituisce un altro
  return i+1;
}

int somma (int a, int b){
  return a+b;
}

void sommasbagliata (int, int, int&);/*PROTOTIPO della funzione, devo solo specificare il tipo di variabili che devo usare
                                      (devo riportare anche '&' e posso dare dei nomi momentanei alla variabile).
                                      La '&' riporta un tipo di variabile particolare e quindi devo riportarla.
                                      Scrivo solo una volta il PROTOTIPO*/
int main ()
{
  int a=1;                    //gli argoementi passano per valore
  int b=2;
  int somma=0;

  sommasbagliata (a,b,somma);
  cout << somma << endl;
}

void sommasbagliata (int a, int b, int & sommaab){    //solo inserendo & posso passare il riferimento e quindi l'effettivo valore
  sommaab = a + b;              //non restiruisco nulla al main, è un passaggio di valore
}
