#include<iostream>
using namespace std;

int main()
{
  int ia,ib,ic;
  while(cin>>ia>>ib)
  {
    ic=0;
    for(int i=ia;i<=ib;i++)
      if(i%4==0 && i%100 || i%400==0)ic++;
    cout<<ic<<endl;
  }
  system("pause");
}
