#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

struct Contact_Str {
  string Name;
  string Surname;
  int PhoneNumber;
};

typedef vector<Contact_Str> PhoneBook;

void add (PhoneBook& B, string surname, string name, int phoneNumber) {
  Contact_Str C;
  C.Name = name;
  C.Surname = surname;
  C.PhoneNumber = phoneNumber;
  B.push_back(C);
}

void print(const PhoneBook& B) {
  for (int i=0;i<B.size();i++) {
    cout << B[i].Name << endl;
    cout << B[i].Surname << endl;
    cout << B[i].PhoneNumber << endl;
  }
}

/*void sortSurnames (PhoneBook& B) {
  for (int i=0;i<B.size();i++)
    for (int j=0;j<B.size();j++)
      if (B[j].Surname > B[j+1].Surname) {
        string temp = B[j+1].Surname;
        B[j+1].Surname = B[j].Surname;
        B[j].Surname = temp;
        cout << temp;
      }
}*/

int FindPos(const PhoneBook& B, string S) {
  for (int i=0;i<B.size();i++)
    if (S == B[i].Surname)
      return i+1;
  throw 1;
}

int main ()
{
  try{
    PhoneBook Rubrica;
    int choice = 10;
    cout << "0) Esci " << endl << "1) Aggiungi contatto" << endl << "2) Stampa" << endl << "3) Stampa menù" << endl << "4) Ordina rubrica" << endl << "5) Trova contatto" << endl;
    while (choice != 0){
      cin >> choice;
      switch (choice) {
        case 1:
          {
          string nome;
          string cognome;
          int numero;
          cout << "Nome: ";
          cin >> nome;
          cout << "Cognome: ";
          cin >> cognome;
          cout << "Numero: ";
          cin >> numero;
          add(Rubrica, cognome, nome, numero);
          break;
          }

        case 2:
          {
          print (Rubrica);
          break;
          }

        case 3:
          {
          cout << "0) Esci " << endl << "1) Aggiungi contatto" << endl << "2) Stampa" << endl << "3) Stampa menù" << endl << "4) Ordina rubrica" << endl << "5) Trova contatto" << endl;
          break;
          }

        /*case 4:
          {
          sortSurnames (Rubrica);
          break;
        }*/

        case 5:
          {
            string Stringa;
            cout << "Che cognome vuoi cercare? ";
            cin >> Stringa;
            cout << FindPos (Rubrica, Stringa) << endl;
          }
      }
    }
  }
  catch (int e){
    switch (e) {
      case 1:
        cout << "Non è nei tuoi contatti." << endl;
        break;
    }
  }
}
