#include <iostream>
using namespace std;

struct myvector {
	int size;
	int capacity;
	int *store;
}v;

void create (myvector &v , int capacity){
	v.store = new int [capacity];
	v.capacity = capacity;
	v.size = 0;
}

void push_back (myvector &v, int x){
	if (v.size < v.capacity){
		*(v.store+v.size)=x;
		v.size++;
	}
	else
		throw (3);
}

void resize(myvector &v, int x){
	v.capacity+=x;
	int *a=new int[v.capacity];

	for(int i=0;i<v.capacity;i++)
		*(a+i)=*(v.store+i);

	delete[]v.store;
	v.store=a;
	a=nullptr;
}

void set(myvector& v, int value, int index){
	if(index<0 || index>=v.size) throw 1;
	v.store[index]=value;
}

int pop_back (myvector& v){
	if(v.size>0){
		return *(v.store+(v.size--));
	}
	else if (v.size==0) throw 2;
}

int get(const myvector &v,int index){
	if((index<0)||(index>=v.size))
	{
		throw (0);
	}
	else
	{
		return (v.store[index]);
	}
}

void destroy(myvector &v){
	delete[]v.store;
	v.size=0;
	v.capacity=0;
	v.store=nullptr;
	cout<<"Vettore eliminato!"<<endl;
}

int main()
{
	int s;
	int user;
	int element,tmp;
	cout<<"Quanto deve essere grande la capacita' del vettore? (numero intero!)"<<endl;
	cin>>v.capacity;
	create(v, v.capacity);

	tmp=v.capacity;
	v.size=v.capacity/2;
	for(int i=0;i<v.size;i++)
		v.store[i]=i;

	for(int i=v.size;i<v.capacity;i++)
		v.store[i]=0;

	for(int i=0;i<v.size;i++)
		cout<<*(v.store+i)<<" ";

	cout<<endl;

	do{
		cout<<"(0) Elimina ed esci"<<endl<<"(1) Aggiungi un elemento."<<endl<<"(2) Elimina l'ultimo elemento"<<endl;
		cout<<"Digita la tua scelta: ";
		cin>>user;

		try{
		switch (user) {
		 		case 0:
					destroy (v);
					cout<<"CIAOOO"<<endl;
					break;

				case 1:
					cout<<"Digita un intero da inserire in fondo al vettore: ";
					cin>>element;
					push_back(v, element);
					break;

				case 2:
					cout<<"Stai eliminando l'ultimo elemento del vettore..."<<endl;
					pop_back(v);
					break;

				default:
					cout<<"Inserisci un valore valido!";
					break;
		}
		}
		catch (int s){
			switch(s){

				case 0: //get_error
					cout<<"Errore! Indice non valido. Riprova"<<endl<<"Inserisci un indice: ";
					int indice;
					cin>>indice;
					get(v, indice);
					break;

				case 1: //set_error
					cout<<"Errore! Indice non valido. Riprova"<<endl<<"Inserisci un indice: ";
					int indice1;
					cin>>indice1;
					int valore;
					cin>>valore;
					set(v, valore, indice);
					break;

				case 2: //pop_back_error
					cout<<"Errore! Vettore vuoto. Riprova"<<endl<<"Inserisci un valore: ";
					int valore1;
					cin>>valore1;
					push_back(v, valore1);
					break;

				case 3: //push_back_error
					resize(v, tmp);
					push_back(v, element);
					break;
			}

		}

		for(int i=0;i<v.size;i++)
			cout<<*(v.store+i)<<" ";
		cout<<endl;

	}while(user);


}
