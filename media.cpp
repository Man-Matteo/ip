#include <iostream>

using namespace std;

int main ()
{
  float voto;
  float media = 0;

  cout << "Inserisci dieci voti" << endl;
  for (int i=0; i < 10; i++)
  {
    cout << "Scrivi il voto n. " << i+1 << ": ";
    cin >> voto;

    while (voto < 0 || voto > 10)
    {
        cout << "Scrivi un voto valido, fra 0 e 10 inclusi: "
        cin >> voto
    }

    media = media + voto;
  }
  media = media / 10;
  cout << "La media dei tuoi voti è:  " << media << endl;
}
