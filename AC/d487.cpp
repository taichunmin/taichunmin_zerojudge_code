#include<iostream>
using namespace std;

int fa(int ia)
{
  if(ia>1)
  {
    cout<<ia<<" * ";
    return ia*fa(ia-1);
  }
  else
  {
    cout<<1<<" = ";
    return 1;
  }
}

int main()
{
  int ia;
  while(cin>>ia)
  {
    cout<<ia<<"! = ";
    cout<<fa(ia)<<endl;
  }
  system("pause");
}
