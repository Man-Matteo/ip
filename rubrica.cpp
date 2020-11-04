#include <iostream>
#include <string.h>
#include <stdio.h>
#define L 10 										//costante lunghezza
using namespace std;
																//realizzare il programma finale , che estende 1 in modo da gestire elementi di tipo CONTATTO

struct CONTATTO{								//struct del contatto
	char nome[L];
	char cognome[L];
	char matricola[7];
	char telefono[L];
}rubrica[L];
typedef CONTATTO contact;

int menu();
int sorting(contact rubrica[],int tot);			//nel menù le scelte saranno quelle di stampare la rubrica ordianta, aggiungere o eliminare contatti
int adding(contact rubrica[],int tot);
int deleting(contact rubrica[],int tot);

int main()
{
	int user=0,totcontact=0;

	totcontact=5;

	do{
		user=menu();
		switch(user){													//switch per scegliere cosa vogliamo fare
			case 0:															//esco dal programma
				  cout<<"Ciao, a presto!";
  		   break;

 		   case 1:														//stampo la rubrica ordinata a patto che ci siano contatti
 		   	if(totcontact==0) cout<<endl<<endl<<" La rubrica e' vuota...";
 		   	else{
 		   		sorting(rubrica, totcontact);
 		   		for(int i=0;i<totcontact;i++)
 		   				  cout<<endl<<i<<" ---> "<<rubrica[i].nome<< "\t" <<rubrica[i].cognome<< "\t Matricola: " << rubrica[i].matricola<<"\t Numero: " <<rubrica[i].telefono<<endl;
				 }
		   break;

			case 2:															//aggiungo contatti alla rubrica
				totcontact = adding(rubrica, totcontact);
				sorting(rubrica, totcontact);
			break;

			case 3:															//elimino contatti dalla rubrica
				sorting(rubrica, totcontact);
				totcontact = deleting(rubrica, totcontact);
			break;
		}

	}while(user!=0);
}

int sorting(contact rubrica[],int tot){
	contact temp;
	for(int i=0;i<tot;i++){										//ordinamento secondo selection sort
      contact small;
      strcpy(small.nome,rubrica[i].nome);
      int small_position=i;

	   for(int j=i+1;j<tot;j++)
	      if(strcmp(rubrica[j].nome,small.nome)<0){
	      	strcpy(small.nome, rubrica[j].nome);
	      	strcpy(small.cognome, rubrica[j].cognome);
	      	strcpy(small.matricola, rubrica[j].matricola);
	      	strcpy(small.telefono, rubrica[j].telefono);

	      	small_position=j;
			}
	   strcpy(temp.nome, rubrica[i].nome);
	   strcpy(temp.cognome, rubrica[i].cognome);
	   strcpy(temp.matricola, rubrica[i].matricola);
	   strcpy(temp.telefono, rubrica[i].telefono);

      strcpy(rubrica[i].nome, rubrica[small_position].nome);
      strcpy(rubrica[i].cognome, rubrica[small_position].cognome);
      strcpy(rubrica[i].matricola, rubrica[small_position].matricola);
      strcpy(rubrica[i].telefono, rubrica[small_position].telefono);

		strcpy(rubrica[small_position].nome, temp.nome);
      strcpy(rubrica[small_position].cognome, temp.cognome);
      strcpy(rubrica[small_position].matricola, temp.matricola);
      strcpy(rubrica[small_position].telefono, temp.telefono);
	}
}

int adding(contact rub[],int tot){								//funzione per aggiungere contatti
	int counter=0;
		cout<<endl<<" Quanti contatti vuoi aggiungere? ";
		cin>>counter;
		fflush(stdin);

		if(counter+tot<L){
			for(int i=0;i<counter;i++){
	  		   cout<<endl<<" Digita il nome del nuovo contatto: ";
	  		   cin >> (rub[tot].nome);
	  		   cout<<endl<<" Digita il cognome del nuovo contatto: ";
	  		   cin >> (rub[tot].cognome);
	  		   cout<<endl<<" Digita la matricola del nuovo contatto: ";
	  		   cin >> (rub[tot].matricola);
	  		   cout<<endl<<" Digita il numero di telefono del nuovo contatto: ";
	  		   cin >> (rub[tot].telefono);

	  		   tot++;
			}
		}
	   else cout<<endl<<"La rubrica e' troppo piccola!";
   return tot;
}

int deleting(contact rub[],int tot){								//funzione per eliminare i contatti
	int counter=0;
	cout<<endl<<" Quanti contatti vuoi eliminare? ";
	cin>>counter;
	if(tot-counter>=0){

      for(int i=0;i<counter && counter<=tot;i++){

	     for(int i=0;i<tot;i++)
            cout<<endl<<i<<" ---> "<<rub[i].nome<<rub[i].cognome<<rub[i].matricola<<rub[i].telefono;

      	cout<<endl<<"Qual e' la posizione del contatto che vuoi cancellare? ";
         int pos; cin>>pos;
      	for(int i=pos;i<tot;i++){
	      	strcpy(rub[i].nome, rub[i+1].nome);
	      	strcpy(rub[i].cognome, rub[i+1].cognome);
	      	strcpy(rub[i].matricola, rub[i+1].matricola);
	      	strcpy(rub[i].telefono, rub[i+1].telefono);
		   }
      tot--;
     }
	}
	else cout<<endl<<endl<<"ERRORE";

   return tot;
}

int menu()									//funzione menù per decidere cosa fare
{
int user=1;
	cout<<"-------- RUBRICA team 9--------";
	cout<<endl<<"MENU': ";
	cout<<endl<<" 0 ---> Uscita.";
	cout<<endl<<" 1 ---> Visualizza Rubrica Ordinata.";
	cout<<endl<<" 2 ---> Inserisci uno o piu' contatti.";
	cout<<endl<<" 3 ---> Cancella uno o piu' contatti.";
	cout<<endl<<"	Inserisci la tua  scelta: ";
	cin>>user;

		if(user>3 || user<0)   cout<<endl<<" DIGITA UN NUMERO VALIDO!";
return user;
}
