int main ()
{
  float f1;
  double f2;
  struct T{
    char a;
    short int b;
    int c;
  };
T aa;
T bb[10];

cout << sizeof float << endl;
cout << sizeof double << endl;
cout << sizeof char << endl;
cout << sizeof short int << endl;
cout << sizeof int << endl;

cout << sizeof f1 << endl;
cout << sizeof f2 << endl;
cout << sizeof aa.a << endl;
cout << sizeof aa.b << endl;
cout << sizeof aa << endl;
cout << sizeof bb << endl;
}
