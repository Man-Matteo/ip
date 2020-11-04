#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void alloca (vector<vector<int> > mymatrix) {
  mymatrix.resize(10);
  for (int i=0; i<10;i++)
    mymatrix[i].resize(10);

}

void riempi (vector<vector<int> > mymatrix) {
  for (int i=0; i < 11; i++)
    mymatrix[i][0] = i;
  for (int i=0; i < 11; i++)
    mymatrix[0][i] = i;

  for (int i=1; i < 11; i++){
    for (int j=1; j< 11; j++)
      mymatrix[i][j] = i*j;
  }
}

int main ()
{
  vector<vector<int> > mymatrix;
  alloca (mymatrix);
  riempi (mymatrix);
}
