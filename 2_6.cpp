#include <iostream>

using namespace std;

int main(){
  double km, fut, ml, metr, formml, formfut;
  cout<<"Vvedite km: ";
  cin>>km;
  cout<<"Vvedite metr: ";
  cin>>metr;
  formml=1.6093;
  formfut=3.2808;
  fut=metr/formfut;
  ml=km/formml;
  cout<<"ml: "<<ml<<" fut: "<<fut<<endl;
  return 0;
}
