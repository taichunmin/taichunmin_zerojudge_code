#include<iostream>
#include<cmath>
using namespace std;

int p[7100]={2,3,5,7};
int p_count=4;

void produce_prime()
{
  for(int i=11,j=4;i<=70000;j=6-j,i+=j)
  {
    bool isprime=true;
    int ta=(int)sqrt(i+0.0)+2;
    for(int k=2;k<p_count && p[k]<ta && p[k]<i;k++)
      if(i%p[k]==0)
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
  //cout<<"共 "<<p_count<<endl;
  int ia;
  while(cin>>ia)
  {
    if(!check_prime(ia))cout<<"非";
    cout<<"質數"<<endl;
  } 
}
