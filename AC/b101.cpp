#include<iostream>
using namespace std;

int main()
{
  int ta;
  int va[42];
  while(cin>>ta,ta)
  {
    int ia,ib;
    for(int i=0;i<42;i++)va[i]=0;
    for(int i=0;i<ta;i++)
    {
      cin>>ia;
      for(int j=0;j<ia;j++)
      {
        cin>>ib;
        va[ib]++;
      }
    }
    ib=va[1];
    for(int i=2;i<42;i++)
      if(va[i]<ib)ib=va[i];
    cout<<ib<<endl;
  }
}
