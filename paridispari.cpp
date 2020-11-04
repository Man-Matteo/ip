#include <iostream>
#include <cstdlib>   //libreria ereditata dal linguaggio c (si riconoscono perchè hanno una c all'inizio)
                     // La funxione int rand() ha un valore imprevedibile, con un valore intero compreso tra 0 e RAND_MAX, che però rimane fisso
                     // srand(___) serve a impostare il seme della sequenza di numeri casuali

#include <ctime>     //in questa libreria c'è una funzione che prende un numero in base al secondo nel quale è iniziato il programma riseptto al 1° Gennaio 1970
using namespace std;

int main ()

{
  int umano, software;
  char c;
  bool umanopari = true;

do
{
cout << "(P)ari o (D)ispari?\n";
  cin >> c;
  if ( c='P' )
    umanopari = true;
  else
    umanopari = false;


  if (umanopari)
    cout << "Tu sei pari\n";
  else
    cout << "Tu sei dispari\n";
  cout << "Scrivi la tua giocata (fra 0 e 5): ";
  cin >> umano;
  if ( umano >= 0 && umano <= 5)
  {
    srand(time(0));    //genera un seme a partire dall'istante di tempo di quando la riga di codice viene eseguita
    software = rand()%6;
    cout << "Io gioco: " << software << endl;

    cout << "E' uscito "<< umano+software << endl;
    int resto = (umano+software)% 2;
    if ( resto == 0 )
      cout << "PARI" << endl;
    else
      cout << "DISPARI" << endl;

    if (resto == 0 && umanopari || resto == 1 && !umanopari )
      cout << "Vinci tu\n";
    else
      cout << "Vinco io\n";
  }
  else
    cout << "La tua giocata non è valida!" << endl;

    cout << "Vuoi giocare ancora? [S/N]\n";
      cin >> c;
} while (c != 'n' && c != 'N')                                                    // control+c per chiudere un programma
}
