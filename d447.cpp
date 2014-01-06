#include<iostream>
#include<cmath>
using namespace std;

int p[7100]={2,3,5,7};
int p_count=4;

void produce_prime()
{
  for(int i=11,ta=4;i<=70000;ta=6-ta,i+=ta)
  {
    bool isprime=true;
    int ta=(int)sqrt(i+0.0)+2;
    for(int j=2;j<p_count && p[j]<ta && p[j]<i;j++)
      if(i%p[j]==0)
      {
        isprime=false;
        break;
      }
    if(isprime)p[p_count++]=i;
  }
}

bool check_prime(int ia)
{
  bool isprime=true;
  int ta=(int)sqrt(ia+0.0)+2;
  for(int i=0;i<p_count && p[i]<ta && p[i]<ia;i++)
    if(ia%p[i]==0)
    {
      isprime=false;
      break;
    }
  return isprime;
}

int main()
{
  produce_prime();
  //cout<<"¦@ "<<p_count<<endl;
  int ia;
  while(cin>>ia)
  {
    if(!check_prime(ia))cout<<"no"<<endl;
    else cout<<"yes"<<endl;
  } 
}
