

#include <iostream>
using namespace std;




int main ()
{
  const int N = 5;
  int *v;
  v = new int [N];
  for (int i=0;i<N;i++)
    v[i]=2*i;

  for (int i=0;i<N;i++)
    cout << *(v+i) << " ";

  cout << endl;

  delete [] v;


}
