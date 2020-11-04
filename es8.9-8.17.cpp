#include <iostream>
using namespace std;

struct myvector {
  int size;
  int capacity;
  int *store;
};

void create (myvector &v, int capacity){
  if (capacity < 0)
    throw 0;
  v.capacity = capacity;
  v.store = new int [v.capacity];
  v.size = 0;
}

void push_back (myvector &v, int x) {
  if (v.size < v.capacity){
    v.store[v.size] = x;
    v.size++;
  }
  else if (v.size == v.capacity) {
    throw 1;
  }
}

void pop_back (myvector &v) {
  if (v.size > 0)
    v.size --;
  else if (v.size == 0)
    throw 2;

}

void set (myvector &v, int value, int index) {
  if (index < 0 || index > v.size)
    throw 3;

  v.store[index-1] = value;
}

int get (const myvector &v, int index) {
   if (index < 0 || index > v.size)
      throw 3;

  return v.store[index-1];
}

void print (const myvector &v) {
  for (int i=0;i<v.size;i++)
    cout << *(v.store+i) << " ";
  cout << endl;
}

void destroy (myvector &v) {
  delete [] v.store;
  v.size = 0;
  v.capacity = 0;
}

void resize (myvector &v, int new_capacity) {
  if (new_capacity <= 0)
    throw 0;
  v.capacity=new_capacity+v.size;
  int *aux = new int [v.capacity];
  for (int i=0;i<v.capacity;i++)
    aux[i] = v.store[i];
  delete [] v.store;
  v.store = aux;
}

void safe_push_back (myvector &v, int x) {
  if (v.size == v.capacity){
    int nc;
    cin >>nc;
    resize (v,nc);
    push_back (v,x);
  }
  else
    push_back (v,x);
}

int main ()
{
  try {
    myvector vect;
    int val;
    int dim;
    int pos;
    cout << "Dimensione vector: ";
    cin >> dim;
    create(vect, dim);
    for (int i=0;i<vect.capacity;i++){
      cout << "Inserisci un numero nel vettore (dal fondo)";
      cin >> val;
      push_back(vect, val);
    }
    print (vect);
    cout << "Ora tolgo l'ultimo elemento"<< endl;
    pop_back (vect);
    print (vect);

    cout << "Ora decidi una posizione dove mettere un valore: ";
    cin >> pos;
    cout << endl << "Ora decidi che numero metterci: ";
    cin >> val;
    set (vect, val, pos);
    print (vect);

    cout << "Dimmi una posizione e ti dirò che numero c'è: ";
    cin >> pos;
    cout << get(vect, pos) << endl;

    cout << "Di quanto vuoi aumentare la dimensione? ";
    cin >> dim;
    resize (vect, dim);
    for (int i=0;i<vect.capacity;i++){
      cout << "Inserisci un numero nel vettore (dal fondo)";
      cin >> val;
      push_back(vect, val);
    }
    print (vect);

    destroy (vect);
  }

  catch (int e) {
    switch (e) {
      case 0:
        cout << "Dimensione non valida"<< endl;
        break;

      case 1:
        cout << "Non c'è più spazio"<< endl;
        break;

      case 2:
        cout << "Vector vuoto"<< endl;
        break;

      case 3:
        cout << "L'indice non esiste"<< endl;
        break;
    }
  }
}
