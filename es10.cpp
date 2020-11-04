#include <iostream>
using namespace std;

int main(){
	
	int hrs;
	int min;
	
	cout<<"inserisci il numero di ore e minuti "<<endl;
	cin>>hrs>>min;
	min=(hrs*60)+min;
	cout<<"i minuti totali sono :\t "<<min<<endl;
	
return 0;
}
