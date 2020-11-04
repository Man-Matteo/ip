#include <iostream>
#define N 10
using namespace std;

int smallest(int[], int);
int main()
{
	int array[N];
	int position=0, temp=0;
	for(int i=0;i<N;i++)
 			  array[i]=0;

	cout << "Inserisci " << N << " valori interi: ";  //sistemo N elementi dentro l'array
	for(int i=0;i<N;i++)
			  cin >> array[i];

	cout<<"\n Array disordinato: ";										//STAMPO L'ARRAY disordinato
	for(int i=0;i<N;i++)
			  cout << array[i]<<"\t";

	for(int i=0;i<N;i++){															//ordinamento
      position=smallest(array,i);
      temp=array[i];
		array[i]=array[position];
		array[position]=temp;
	}

	cout<<"\n\n Array ordinato: ";										//stampo l'array ordinato
	for(int i=0;i<N;i++)
			  cout << array[i]<<"\t";
}
int smallest(int array[], int i)
{
	int small=array[i];
	int small_position=i;

	for(int j=i+1;j<N;j++)
		if(array[j]<small){
		   small=array[j];
			small_position=j;
		}
   return small_position;
}
