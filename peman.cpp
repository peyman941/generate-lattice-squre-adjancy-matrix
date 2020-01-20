#include "iostream"
#include "ctime"
#include "fstream"
#include "cstdlib"
#include "cmath"
using namespace std;
int main(int argc, char const *argv[]) {
  ofstream output("./network.txt");
  int A[16][16];
  int m;
  m=4;
  int n=m*m;
  for (size_t j = 0; j < n; j++) {
    for (size_t i = 0; i < n; i++) {
        A[i][j]=0;
    }
  }
  for (size_t j = 0; j < m; j++) {
    for (size_t i = m*j; i < m*(j+1)-1; i++) {
      A[i][i+1]=A[i+1][i]=1;
    }
  }
  for (size_t i = 0; i < m; i++) {
    for (size_t j = i; j < m*(m-1)+i; j+=m) {
      A[j][j+m]=A[j+m][j]=1;
    }
  }

/*
  for (  size_t j = 0; j < n; j++) {
    for (size_t i = 0; i < n; i++) {
      std::cout << A[i][j] << '\t';
      output<<A[i][j]<<"\t"<<endl;
  }
}*/
  return 0;
}
