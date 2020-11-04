#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main ()
{
srand(time(0));
int casual = rand()%3+1;														//genero una giocata casuale da parte della macchina 
cout << "(s)asso, (c)arta, (f)orbice?" << endl;
char user;
cin >> user;																				//chiedo all'utente (bravo) di digitare un carattere per la sua scelta
switch(user){																				//switch per stampare la scelta 'umana'
	case 's':
	cout << "Hai scelto sasso!" << endl;
	break;

	case 'c':
	cout << "Hai scelto carta!" << endl;
	break;

	case 'f':
	cout << "Hai scelto forbice!" << endl;
	break;

}
 switch(casual){																		//stampo la scelta della macchina e calcolo l'esito della partita
	case 1:
	cout << "Ho scelto sasso!" << endl;								//caso in cui la macchina gioca sasso
	if (user=='s')
		cout << "Pareggio!" << endl;
	else
		if (user =='c')
			cout << "Hai vinto!" << endl;
		else
			cout << "Hai perso!" << endl;


	break;

	case 2:
	cout << "Ho scelto carta!" << endl;								//caso in cui la macchina gioca carta
	if (user=='s')
		cout << "Hai perso!" << endl;
	else
		if (user =='c')
			cout << "Pareggio!" << endl;
		else
			cout << "Hai vinto!" << endl;
	break;


	case 3:
	cout << "Ho scelto forbice!" << endl;							//caso in cui la macchina gioca forbice
	if (user=='s')
		cout << "Hai vinto!" << endl;
	else
		if (user =='c')
			cout << "Hai perso!" << endl;
		else
			cout << "Pareggio!" << endl;
	break;
	}

}
