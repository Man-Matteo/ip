#include<iostream>
using namespace std;

double absolute(double x){ 									//funzione valore assoluto
	if (x<0) x=-x;
	return x;
}

double square (double x){								//funzione quadrato
	return x*=x;
}

double max (double x, double y){				//funzione massimo
	if (y>x) return y;
	return x;
}

double min (double x, double y){					//funzione minimo
	if (y<x) return y;
	return x;
}
double sqrt_dif (double x, double y){			//funzione quadrato della differenza
	return (x-y)*(x-y);
}
double diff_abs (double x, double y){			//funzione valore assoluto della differenza
	return absolute(x-y);
}
bool even (int x){												//numero pari
	if (x%2==0) return true;
}
bool odd (int x){													//numero dispari
	if (x%2!=0) return true;
}


int main(){
int a,b;
char user;


	cout<<"A: valore assoluto"<<endl
	<<"Q: quadrato"<<endl
	<<"M: massimo"<<endl
	<<"m: minimo"<<endl
	<<"D: differenza al quadrato"<<endl
	<<"d: differenza in valore assoluto"<<endl
	<<"E: is even"<<endl
	<<"O: is odd"<<endl
	<<"Inserisci la tua scelta...";
	cin>>user;

	switch(user){													//switch per scegiere che funzione utilizzare...le lettere per scegiere la fuznione
		case'A':
		cout<<"Inserisci un numero ";				//per ogni caso chiedo un valore per fare una funzione
		cin>>a;
		cout<<"Risultato valore assoluto "<< absolute(a)<<endl;		//faccio un cout per dare il risultato dell'operazione
		break;

		case'Q':
		cout<<"Inserisci un numero ";
		cin>>a;
		cout<<"Risultato quadrato "<< square(a)<<endl;
		break;

		case'M':
		cout<<"Inserisci due numeri ";
		cin>>a;
		cin>>b;
		cout<<"Risultato massimo "<< max(a,b)<<endl;
		break;

		case'm':
		cout<<"Inserisci due numeri ";
		cin>>a;
		cin>>b;
		cout<<"Risultato minimo "<< min(a,b)<<endl;
		break;

		case'D':
		cout<<"Inserisci due numeri ";
		cin>>a;
		cin>>b;
		cout<<"Risultato differenza al quadrato "<< sqrt_dif(a,b)<<endl;
		break;

		case'd':
		cout<<"Inserisci due numeri ";
		cin>>a;
		cin>>b;
		cout<<"Risultato differenza in valore assoluto "<< diff_abs(a,b)<<endl;
		break;

		case'E':
		cout<<"Inserisci un numero ";
		cin>>a;
		cout<<"E' pari? ";
		if (even(a)) cout<< "Si' "<<endl;
		else cout<< "No "<<endl;
		break;

		case'O':
		cout<<"Inserisci un numero ";
		cin>>a;
		cout<<"E' dispari? ";
		if (odd(a)) cout<< "Si' "<<endl;
		else cout<< "No "<<endl;
		break;

	}

}
