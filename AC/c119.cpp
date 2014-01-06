//c119: ACM 10220-I Love Big Numbers
#include<iostream>
using namespace std;

int ia[1000]={};
int ib[100000]={};

int main()
{
  int ic=1;
  ia[0]=1;
  ib[0]=1;
  for(int i=2;i<=1000;i++)
  {
    for(int j=0;j<ic;j++)ib[j]*=i;
    for(int j=0;j<ic;j++)
    {
      if(j==ic-1 && ib[j]>9)ic++;
      ib[j+1]+=ib[j]/10;
      ib[j]%=10;
      ia[i-1]+=ib[j];
    }
  }
//  cout<<'~'<<ic<<endl;
  while(cin>>ic)
    cout<<ia[ic-1]<<endl;
//  system("pause");
}
