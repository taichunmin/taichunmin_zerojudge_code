#include<iostream>
using namespace std;

int main()
{
  int ta;
  while(cin>>ta)
  {
    int ia,ib,ic;
    cin>>ia;
    for(int i=1;i<ta;i++)
    {
      cin>>ib;
      if(ia<ib)ia^=ib^=ia^=ib;
      while(ib>0)
      {
        ic=ia%ib;
        ia=ib;
        ib=ic;
      }
    }
    cout<<ia<<endl;
  }
}
