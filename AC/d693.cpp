#include<iostream>
using namespace std;

int fa(int ib,int ic)
{
  int ftb=ib,ftc=ic;
  while(ftc>0)
  {
    ftb%=ftc;
    ftb^=ftc^=ftb^=ftc;
  }
  return ib/ftb*ic;
}

int main()
{
  int ia,ib,ic;
  while(cin>>ia,ia)
  {
    cin>>ib;
    for(int t1=1;t1<ia;t1++)
    {
      cin>>ic;
      ib=fa(ib,ic);
    }
    cout<<ib<<endl;
  }
  //system("pause");
}
