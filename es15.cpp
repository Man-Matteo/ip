#include<iostream>
using namespace std;

int main()
{
   int a,b;

   /**LETTURA DEI DUE NUMERI DA TASTIERA**/
   cout<<"Inserisci due numeri interi: "<<endl; 
   cin>>a>>b;
   cout<<"Numeri prima dello scambio:\na: "<<a<<"\nb: "<<b<<endl;
   /*OPERAZIONI DI SCAMBIO SENZA VARIABILE DI APPOGGIO*/
   a = a + b;
   b = a - b;
   a = a - b;
   /*STAMPA DEI DUE NUMERI DOPO LO SCAMBIO*/
   cout<<"Numeri dopo lo scambio:\na: "<<a<<"\nb: "<<b<<endl;
}
