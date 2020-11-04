#include <iostream>
#include <cmath>

using namespace std;

int main(){
float a=0,b=0,min=0,max=0;

cout << "Inserisci due numeri:\n";
cin >> a >> b;

min=(a+b)/2-(fabs(a-b)/2);
max=(a+b)/2+(fabs(a-b)/2);

cout << "Il numero minore e`: " << min << "\nIl numero maggiore e`: " << max << endl;
}