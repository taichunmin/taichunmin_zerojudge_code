#include<iostream>
#include<cmath>
using namespace std;

int prime[1000]={2,3,5,7};
int p_count=4;
void produce_prime()
{
  for(int i=11,ta=4;i<=1001;ta=6-ta,i+=ta)
  {
    bool isprime=true;
    int ta=(int)sqrt(i+0.0)+2;
    for(int j=2;j<p_count && prime[j]<ta && prime[j]<i;j++)
      if(i%prime[j]==0)
      {
        isprime=false;
        break;
      }
    if(isprime)prime[p_count++]=i;
  }
}

int main()
{
  produce_prime();
  int ia,ib,ta,tb;
  while(cin>>ia,ia)
  {
    ib=0;
    int ta=(int)sqrt(ia+0.0)+2;
    tb=ia;
    for(int i=0;i<p_count && prime[i]<=ta && prime[i]<=ia;i++)
      if(ia>1 && ia%prime[i]==0)
      {
        while(ia%prime[i]==0)ia/=prime[i];
        ib++;
      }
    if(ia>1)ib++;
    cout<<tb<<" : "<<ib<<endl;
  }
  //system("pause");
}
