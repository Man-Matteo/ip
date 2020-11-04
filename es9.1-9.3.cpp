#include <iostream>
#include <vector>
using namespace std;

void readVector(vector<int> &v) {
  int dim, val;
  cout << "Inserisci la dimensione della sequenza: ";
  cin >> dim;

  for (int i=0;i<dim;i++) {
    cout << "Inserisci un valore: ";
    cin >> val;
    v.push_back(val);
    }
}

void printVector (vector<int> &v) {
  for (int i=0;i<v.size();i++)
    cout << v.at(i) << "\t";
  cout << endl;
}

int SequentialSearch_vector(const std::vector<int>& v, int item) {
  for (int i=0;i<v.size();i++)
    if (v.at(i)==item)
      return i+1;
  return -1;
}


int main ()
{
  vector<int> vect;
  int num;
  readVector (vect);
  printVector (vect);
  cout << "Che numero cerchi? ";
  cin >> num;
  cout << "Il numero che hai cercato è alla posizione: " SequentialSearch_vector (vect, num) << endl;
}
