#include<iostream>
using namespace std;

int aa[300],ab[300],ac[300];

int main()
{
  int ia;
  while(cin>>ia)
  {
    for(int i=0;i<ia;i++)
    {
      cin>>aa[i]>>ab[i]>>ac[i];
      ab[i]=aa[i]+ab[i]+ac[i];
      ac[i]=i+1;
    }
    for(int i=0;i<5;i++)//只取前5名 故只跑5次 
      for(int j=i+1;j<ia;j++)
        if(ab[i]<ab[j])//總分 大到小 
        {
          aa[i]^=aa[j]^=aa[i]^=aa[j];
          ab[i]^=ab[j]^=ab[i]^=ab[j];
          ac[i]^=ac[j]^=ac[i]^=ac[j];
        }
    for(int i=0;i<5;i++)//只取前5名 故只跑5次 
      for(int j=i+1;j<ia;j++)
        if(ab[i]==ab[j] && aa[i]<aa[j])//語文 大到小 
        {
          aa[i]^=aa[j]^=aa[i]^=aa[j];
          ab[i]^=ab[j]^=ab[i]^=ab[j];
          ac[i]^=ac[j]^=ac[i]^=ac[j];
        }
    for(int i=0;i<5;i++)//只取前5名 故只跑5次 
      for(int j=i+1;j<ia;j++)
        if(ab[i]==ab[j] && aa[i]==aa[j] && ac[i]>ac[j])//座號 小到大 
        {
          aa[i]^=aa[j]^=aa[i]^=aa[j];
          ab[i]^=ab[j]^=ab[i]^=ab[j];
          ac[i]^=ac[j]^=ac[i]^=ac[j];
        }
    for(int i=0;i<5;i++)
      cout<<ac[i]<<' '<<ab[i]<<endl;
  }
}
