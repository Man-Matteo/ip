#include <iostream>
#include <vector>
#define N 1000
using namespace std;

void is_prime () {
  bool isprime [N];
  for (int i=0;i<N;i++)
    isprime[i] = true;
  int p=2;
  for (int i=p+1;i<N;i++){
    if (i%p == 0)
      isprime[i] = false;
    if (isprime[i] == true){
      cout << i << " ";
      cout << endl;
    }
  p++;
  }
}

int main ()
{
  is_prime ();
}
