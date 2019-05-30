#include <iostream>

using namespace std;

long int Fib(int i)
{
  int value = 0;
  if(i < 1) return 0;
  if(i == 1) return 1;
  return Fib(i-1) + Fib(i - 2);
  }
int main()
  {
    int z;
    cout<<"Vvedite kol-vo chisel Chivapchichi: ";
    cin>>z;
    int i = 0;
    while(i<z)
    {
      cout << Fib(i) << endl;
      i++;
    }
    return 0;
  }
