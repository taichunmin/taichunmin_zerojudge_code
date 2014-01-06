#include<iostream>
#include<cmath>
using namespace std;

int p[7100]={2,3,5,7};
int p_count=4;

void produce_prime()
{
  for(int i=11,ta=4;i<=50000;ta=6-ta,i+=ta)
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
  if(ia==1)return false;
  bool isprime=true;
  for(int i=0;i<p_count && p[i]*p[i]<=ia && isprime;i++)
    if(ia%p[i]==0)isprime=false;
  return isprime;
}

int main()
{
  produce_prime();
  //cout<<"¦@ "<<p_count<<endl;
  int ia;
  while(scanf("%d",&ia)!=EOF,ia)
  {
    printf("%d\n",!check_prime(ia));
  } 
}
