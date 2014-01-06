#include<iostream>
using namespace std;
int main()
{
  long long ia,ib,ic,id,ie,ig;
  while(cin>>ia>>ib)
  {
    ic=1;
    id=0;
    for(int i=0;i<ib;i++)
    {
      ie=id;
      ig=ic*(ia-1)+id*(ia-2);
      ic=ie;
      id=ig;
    }
    cout<<ic<<endl;
  }
  //system("pause");
}
