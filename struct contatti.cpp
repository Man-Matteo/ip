#include <iostream>
#include <cstring>
#define N 10
#define L 15 //lunghezza nome o cognome
using namespace std;
/*realizzare un programma 'alfa' che che realizza una struct CONTATTO, contenente i campi necessari
(con i tipi opportuni); dichiarare due variabili di tipo CONTATTO, inizializzarle con valori a
scelta, e confrontarle per scoprire se il primo contatto � precedente o segue il secondo.*/

struct CONTATTO{   // struct contatto
	char nome[L];
	char cognome[L];
	char matricola[7];
}c1,c2;
typedef CONTATTO contact;

int main()
{
	strcpy(c1.nome,"mario");								//contatti di prova
	strcpy(c1.cognome,"rossi");
	strcpy(c1.matricola,"4825087");

	strcpy(c2.nome,"francesco");
	strcpy(c2.cognome,"petrarca");
	strcpy(c2.matricola,"25506");

	cout<<"CONTATTO 1"<<endl;								//stampo contatto 1 e contatto 2 in ordine casuale
	cout<<"Nome: "<<c1.nome<<endl<<"Cognome: "<<c1.cognome<<endl<<"Matricola: "<<c1.matricola<<endl;

	cout<<endl<<"CONTATTO 2"<<endl;
	cout<<"Nome: "<<c2.nome<<endl<<"Cognome: "<<c2.cognome<<endl<<"Matricola: "<<c2.matricola<<endl;

	cout<<endl<<"Ordino per nome..."<<endl;    //ordine alfabetico partendo dal nome
	if(strcmp(c1.nome,c2.nome)>0){
	   cout<<"il primo contatto e' "<<c2.nome<<endl;
	   cout<<"Cognome: "<<c2.cognome<<endl<<"Matricola: "<<c2.matricola<<endl;
   }else{
      cout<<"il primo contatto e' "<<c1.nome<<endl;
	   cout<<"Cognome: "<<c1.cognome<<endl<<"Matricola: "<<c1.matricola<<endl;
	}
}
