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
    for(int i=0;i<5;i++)//�u���e5�W �G�u�]5�� 
      for(int j=i+1;j<ia;j++)
        if(ab[i]<ab[j])//�`�� �j��p 
        {
          aa[i]^=aa[j]^=aa[i]^=aa[j];
          ab[i]^=ab[j]^=ab[i]^=ab[j];
          ac[i]^=ac[j]^=ac[i]^=ac[j];
        }
    for(int i=0;i<5;i++)//�u���e5�W �G�u�]5�� 
      for(int j=i+1;j<ia;j++)
        if(ab[i]==ab[j] && aa[i]<aa[j])//�y�� �j��p 
        {
          aa[i]^=aa[j]^=aa[i]^=aa[j];
          ab[i]^=ab[j]^=ab[i]^=ab[j];
          ac[i]^=ac[j]^=ac[i]^=ac[j];
        }
    for(int i=0;i<5;i++)//�u���e5�W �G�u�]5�� 
      for(int j=i+1;j<ia;j++)
        if(ab[i]==ab[j] && aa[i]==aa[j] && ac[i]>ac[j])//�y�� �p��j 
        {
          aa[i]^=aa[j]^=aa[i]^=aa[j];
          ab[i]^=ab[j]^=ab[i]^=ab[j];
          ac[i]^=ac[j]^=ac[i]^=ac[j];
        }
    for(int i=0;i<5;i++)
      cout<<ac[i]<<' '<<ab[i]<<endl;
  }
}
