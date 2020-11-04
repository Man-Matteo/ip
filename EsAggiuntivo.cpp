#include <iostream>
#include <cmath>

using namespace std;

int main(){
const float K = 30.48,tol=0.1;
float y,res=0;
int x,cm,ft=0;

cout<<"Inserisci la tua altezza in centimetri :";
cin>>cm;
cout<<endl;

res = cm/K;
x=res;
y=10*(res-x);


cout <<"\nLa tua altezza e` di " << x <<" piedi e "<< round(y) << " pollici."<<endl;
}