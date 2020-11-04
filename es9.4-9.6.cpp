#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v) {
  vector <int> rev;
  for (int i=0;i<v.size();i++){
    rev.push_back(v.at(v.size()-i-1));
  }
  return rev;
}

void printVector (vector<int> &v) {
  for (int i=0;i<v.size();i++)
    cout << v.at(i) << "\t";
  cout << endl;
}

void readVector(vector<int> &v) {
  int dim, val;
  cout << "Inserisci la dimensione della sequenza: ";
  cin >> dim;

  if (dim < 0)
    throw 2;

  for (int i=0;i<dim;i++) {
    cout << "Inserisci un valore: ";
    cin >> val;
    v.push_back(val);
    }
}

vector<int> cat(vector<int> v1, vector<int> v2) {
  vector <int> total;

  for (int i = 0;i < v1.size(); i++)
    total.push_back(v1.at(i));

  for (int i = 0;i < v2.size(); i++)
    total.push_back(v2.at(i));

  return total;
}

vector<int> insert(vector<int> v, int i, int val) {
  if (i<0 || i > v.size()+1)
    throw 1;
  if (i == v.size()+1) {
    v.push_back(val);
    return v;
  }

  i--;
  int last = v.at(v.size()-1);
  for (int j=v.size()-1; j!=i; j--)
    v.at(j) = v.at(j-1);
  v.at(i) = val;
  v.push_back(last);
  return v;
}

int main ()
{
  try {
    vector <int> source;
    vector <int> dest;
    vector <int> somma;
    int num, pos;
    readVector(source);
    dest = reverse (source);
    printVector (source);
    printVector (dest);
    somma = cat (source,dest);
    printVector (somma);
    cout << "Che valore vuoi inserire? ";
    cin >> num;
    cout << "In che posizione? ";
    cin >> pos;
    source = insert (source, pos, num);
    printVector (source);
  }

  catch (int e) {
    switch (e) {
      case 1:
        cout << "Non puoi inserire un numero in quella posizione! ";
        break;

      case 2:
        cout << "Il vettore non puo' avere size negativo! ";
        break;
    }
  }
}
