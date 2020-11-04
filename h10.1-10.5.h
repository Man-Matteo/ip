struct cell {
  int info;
  cell* next;
};

typedef cell* list;

list newcell(const int cont);
list push_front(list & mylist, const int cont);
list push_back(list & mylist, const int cont);
list insert_after(list & mylist,int  cont, int n);
list clear (list mylist);
void print(list mylist);
int length(list mylist);
list remove(list &mylist, int n);
//list remove_cont (list & mylist, int cont);
bool is_present(list mylist, int cont);
list find_first(list & mylist, int cont);
list at(list mylist, int n);
