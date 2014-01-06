//奇因數個數 
#include<iostream>
#include<cmath>
using namespace std;

int va[1857859]={2,3,5,7};
int p_count=4;

int p_prime()
{
  for(int i=11,j=4;i<1000000;j=6-j,i+=j)
  {
    bool is_prime=true;
    for(int k=2;k<p_count && va[k]*va[k]<=i && is_prime;k++)//va[k]*va[k]<=i
      if(i%va[k]==0)is_prime=false;
    if(is_prime)va[p_count++]=i;
  }
  return p_count;
}

int main()
{
  p_prime();
  long long la;
  while(cin>>la)
  {
    int ib=1,ic;
    while(la>0 && la%2==0)la/=2;
    for(int i=1;i<p_count && ((long long)va[i])*va[i]<=la;i++)
      if(la%va[i]==0)
      {
        for(ic=1;la%va[i]==0;ic++)la/=va[i];
        ib*=ic;
      }
    if(la>1)ib++;
    cout<<ib<<endl;
  }
}
