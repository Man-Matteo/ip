#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main ()
{
unsigned int c=0, n_matches, win_us=0, win_soft=0;

system("clear");
cout << "Quante partite vuoi giocare?" << endl;
cin >> n_matches;
srand(time(0));
do{
	int casual = rand()%3+1;
	cout << "(s)asso, (c)arta, (f)orbice?" << endl;		//chiedo all'utente (bravo) di digitare un carattere per la sua scelta
	char user;
	cin >> user;
	switch(user){																			//switch per stampare la scelta 'umana'
		case 's':
		cout << "\nHai scelto sasso!" << endl;
		break;

		case 'c':
		cout << "\nHai scelto carta!" << endl;
		break;

		case 'f':
		cout << "\nHai scelto forbice!" << endl;
		break;

	}
	switch(casual){																		//stampo la scelta della macchina e calcolo l'esito della partita
		case 1:
		cout << "\nHo scelto sasso!" << endl;
		if (user=='s')
			cout << "\nPareggio.." << endl;
		else
			if (user =='c'){
				cout << "\nHai vinto!" << endl;
				win_us++;																		//incremento la variabile counter per le vittorie umane
			}
			else{
				cout << "\nHai perso!" << endl;
				win_soft++;																	//incremento la variabile counter per le vittorie della macchina
				}
		break;

		case 2:
		cout << "\nHo scelto carta!" << endl;
		if (user=='s'){
			cout << "\nHai perso!" << endl;
			win_soft++;
		}
		else
			if (user =='c')
				cout << "\nPareggio.." << endl;
			else{
				cout << "\nHai vinto!" << endl;
				win_us++;
			}
		break;


		case 3:
		cout << "\nHo scelto forbice!" << endl;
		if (user=='s'){
			cout << "\nHai vinto!" << endl;
			win_us++;
		}
		else
			if (user =='c'){
				cout << "\nHai perso!" << endl;
				win_soft++;
			}
			else
				cout << "\nPareggio.." << endl;
		break;
	}
	c++;																										//incremento il counter per le giocate totali
	usleep(3000000);																				//fermo il programma per 3000000 microsecondi (3 sec.)
	system("clear");																				//'pulisco' il terminale
	cout << "Punteggio macchina: " << win_soft;							//stampo i punteggi uomo vs. macchina
	cout << "\tPunteggio uomo: " << win_us << endl << endl;

	unsigned int ko=static_cast<float>(n_matches/2)+1;			/*dichiaro l'intero senza segno 'K.O.' e lo inizializzo
	                                                  			al valore float della metà delle partite da giocare + 1
																	  											in modo da giocare 'al meglio di..' Es.:
																	  											al meglio di 3...3/2=1.5
																	  											1.5+1=2.5
																	  											2.5 da assegnare a ko(che è unsigned int)sarà troncato a 2
																	  											(se uno dei 2 giocatori vince 2 gioocate al meglio delle 3 prima che il counter
																	  											delle partire sia uguale ad n_matches, esco dal 'do{}while;' ed esguo il resto)*/

	if(n_matches==1 || win_us==ko || win_soft==ko)					//una qualsiasi delle 3 condizioni basterà a far interrompere il ciclo
		break;

}while(c<n_matches);																			//alla fine del torneo...:
if(win_us>win_soft)																				//se le vincite umane sono più di quelle artificiali:
	cout << "Congratulazioni, hai vinto il torneo!" << endl;
else if(win_us<win_soft)																	//altrimenti, se le vincite artificiali sono più di quelle umane:
	cout << "GAME OVER!" << endl;
     else																									//ancora altrimenti, le 2 variabili di controllo sono per forza uguali, ne consegue che...:
     	cout << "Abbiamo pareggiato ._." << endl;
}
