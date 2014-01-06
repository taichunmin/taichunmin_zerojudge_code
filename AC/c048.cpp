//
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  long long ia,ib;
  int ic[2];
  while(cin>>ia,ia)
  {
    ib=sqrt(ia);
    if(ib*ib<ia)ib++;
    ia-=(ib-1)*(ib-1);
    ic[(ib+1)%2]=ib,ic[ib%2]=1;
    if(ia>=ib)
      ic[ib%2]=ib,ic[(ib+1)%2]=ib-ia+ib;
    else ic[ib%2]+=ia-1;
    cout<<ic[0]<<' '<<ic[1]<<endl;
  }
  //system("pause");
}
