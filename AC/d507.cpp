#include<iostream>
using namespace std;

int main()
{
  int ia,ib,ic;
  while(cin>>ia>>ib>>ic)
  {
    ia*=ia;
    ib*=ib;
    ic*=ic;
    if(ic<ia)ia^=ic^=ia^=ic;
    if(ic<ib)ib^=ic^=ib^=ic;
    if(ia+ib>ic)cout<<"acute triangle"<<endl;
    else if(ia+ib==ic)cout<<"right triangle"<<endl;
    else cout<<"obtuse triangle"<<endl;
  }
  //system("pause");
}
