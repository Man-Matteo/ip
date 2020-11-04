#include <iostream>
using namespace std;

struct dynamic_array {
int* store;
 int size;
};

dynamic_array new_d_array(int size) {

  if (size <= 0)
    size = 0;

  dynamic_array a;
  a.size = size;
  a.store = new int [a.size];
  return a;
}

void read_d_array(const dynamic_array& a) {

  for (int i=0;i<a.size;i++){
    cout << "Insert a number " << endl;
    cin >> a.store[i];
  }
}

void print_d_array(const dynamic_array& a) {

  for (int i=0;i<a.size;i++)
    cout << *(a.store+i) << " ";
  cout << endl;
}

void delete_d_array( dynamic_array& a) {
  if (a.size > 0){
    delete [] a.store;
    a.size = 0;
  }
  else
    throw 1;
}

void set(dynamic_array& a, int value, int index) {
  if (index < 0 || index >= a.size)
    throw 2;
  a.store[index] = value;
}

int main ()
{
  int dim;
  int valore;
  int indice;
  dynamic_array myarray;
  cout << "Array size: ";
  cin >> dim;
  try{
    myarray = new_d_array (dim);
    read_d_array (myarray);

    cout << "Posizione nuovo valore: ";
    cin >> indice;
    cout << "Nuovo valore: ";
    cin >> valore;

    set (myarray, valore, indice);
    print_d_array (myarray);
    delete_d_array (myarray);
  }

  catch (int e){
    switch (e) {
      case 1:
        cout << "Errore, l'array non puo' avere dimensione negativa" << endl;
        break;

      case 2:
        cout << "Errore, non puoi inserire un elemento in quella posizione" << endl;
        break;
    }
  }
}
