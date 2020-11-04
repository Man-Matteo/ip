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
double a,b;																//cout di tutte le funzioni dopo aver chiesto due valori all'utente
	cin>>a>>b;
	cout<<"Risultato valore assoluto "<< absolute(a)<<endl;
	cout<<"Risultato quadrato "<< square(a)<<endl;
	cout<<"Risultato massimo "<< max(a,b)<<endl;
	cout<<"Risultato minimo "<< min(a,b)<<endl;
	cout<<"Risultato differenza al quadrato "<< sqrt_dif(a,b)<<endl;
	cout<<"Risultato differenza in valore assoluto "<< diff_abs(a,b)<<endl;
	cout<<"E' pari? "<< even(a)<<endl;
	cout<<"E' dispari? "<< odd(a)<<endl;



}
