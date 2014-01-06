#include<iostream>
using namespace std;

int main()
{
  int ia,ib,ic;
  while(cin>>ia,ia)
  {
    ib=0;
    for(int i=0;i<ia;i++)
    {
      cin>>ic;
      if(i)cout<<" + ";
      cout<<ic;
      ib+=ic;
    }
    cout<<" = "<<ib<<endl;
  }
}
