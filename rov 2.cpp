#include <iostream>
using namespace std;

float aerarett (float, float);

int main ()
{
  try{                    //svolge l'algoritmo senza guardare agli errori
    cout << "base = 3; altezza = 4; area= " << arearett (3,4) << endl;
    cout << "base = -3; altezza = 4; area= " << arearett (-3,4) << endl;
  }
  catch (int errore){     //prende ciò che "tira" il throw
    if (errore == -1)  cout << "non inserire valori negativi!" << endl;
  }
}


float arearett (float base, float altezza){
  if (base < 0 || altezza < 0)
    throw -1;           //throw va al sistema e quindi blocca il programma e crea un core dump (file di testo con messaggio di errore)
  return base * altezza;
}
