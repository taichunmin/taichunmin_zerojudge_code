#include<iostream>
using namespace std;

int main()
{
  int da[12],ia,ib,ic;
  while(cin>>ia)
  {
    ib=300-ia;
    if(ib>-1)
    {
      ic=ib/100;
      ib%=100;
      for(int i=1;i<12;i++)
      {
        cin>>ia;
        if(ib<0)continue;
        ib+=(300-ia);
        if(ib<0)
        {
          ib=-1-i;
          continue;
        }
        ic+=ib/100;
        ib%=100;
      }
    }
    else ib=-1;
    if(ib<0)cout<<ib<<endl;
    else cout<<ib+ic*120<<endl;
  }
}
