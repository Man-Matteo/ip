#include <iostream>
using namespace std;

void stat (float val [], int n, float *max, float *min, float *media){
  *max=*min=*media=val[0];
  for (int i = 1; i < n; i++)
    if (*max<val[i]) *max = val[i];
    if (*min>val[i]) *min = val[i];
}


int main ()
{
  const int N = 5
  float valori [N];
  float minimo, massimo, media;

  cout << "Scrivi " << N << " valori\n";
  for (int i = 0; i < N; i++){
    cout << "Scrivi il valore n° " << i << endl;
    cin >> valori[i];
  }
stat (float val [N],float &max, float &min, float &media)
}
