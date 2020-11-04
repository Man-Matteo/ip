#include <iostream>
#include "es10.1-10.5.h"
using namespace std;

list newcell(const int cont) {
  list aux = new cell;
  aux -> info = cont;
  aux -> next = nullptr;
  return aux;
}

list push_front(list & mylist, const int cont){
  list temp = newcell (cont);
  temp->next = mylist;
  mylist = temp;
  return mylist;
}

list push_back(list & mylist, const int cont) {
  list temp = newcell(cont);
  list curr = mylist;
  if (mylist == nullptr)
    mylist = temp;
  while (curr->next != nullptr)
    curr = curr -> next;
  curr -> next = temp;
  return mylist;
}       //????

list insert_after(list & mylist,int  cont, int n) {
  list curr = mylist;
  list temp = newcell (cont);
  if (curr=nullptr)
    mylist = temp;
  while ((curr->next != nullptr) && (n != 0)) {
    curr = curr -> next;
    n--;
  }
  temp -> next = curr -> next;
  curr -> next = temp;
  return mylist;
}   //????

list clear (list mylist) {
  if (mylist != nullptr) {
    mylist -> next = clear (mylist -> next);
    delete mylist;
    mylist = nullptr;
  return mylist;
  }

}

void print(list mylist) {
  list aux = mylist;
  cout <<"[ ";
  while (aux -> next != nullptr) {
    cout << aux -> info << " ";
    aux = aux -> next;
  }
  cout << "]" << endl;
}

int length(list mylist) {
  int i = 0;
  list aux = mylist;
  while (aux -> next != nullptr)
    i ++;
  return i;
}

list remove(list &mylist, int n) {
  if (n > length(mylist)+1)
    throw 1;
  list curr = mylist;
  if (n=1) {
    curr = curr -> next;
    mylist = curr;
    return mylist;
  }

  for (int i=0;i<n-1;i++)
    curr = curr -> next;
  curr -> next = curr ->next->next;
}                    //????

//list remove_cont (list & mylist, int cont)

bool is_present(list mylist, int cont) {
  list aux = mylist;
  while (aux -> next != nullptr) {
    if (aux -> info == cont)
      return true;
    aux = aux -> next;
  }
  return false;
}

list find_first(list & mylist, int cont) {
  list aux = mylist;
  while (aux -> next != nullptr) {
    if (aux -> info == cont)
      return aux;
  aux = aux -> next;
  }
  return nullptr;
}

list at(list mylist, int n) {
  if ((n>length(mylist)) || (length(mylist) == 0))
    throw 2;
  list aux = mylist;
  for (int i=0;i<n;i++)
    aux = aux -> next;
  return aux;
}
