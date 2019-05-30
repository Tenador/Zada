#include <iostream>

using namespace std;

int main(){
  double a, n, k, z, f;
  cout<<"Vvedite kov-vo chisel: ";
  cin>>a;
  n=0;
  k=0;
  while(a>n){
    z=4*k+3;
    k++;
    cout<<z<<endl;
    n++;
  }
  return 0;
}
