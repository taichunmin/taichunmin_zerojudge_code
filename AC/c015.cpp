#include<iostream>
using namespace std;

long long eversion(long long team)
{
    long long k=0;
    while(team>0)
    {
      k*=10;
      k+=team%10;
      team/=10;
    }
    return k;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
      long long n;
      cin>>n;
      n+=eversion(n);
      int count=1;
      while(1)
      {
        long long r=eversion(n);
        if(r==n)break;
        count++;
        n+=r;
      }
      cout<<count<<' '<<n<<endl;
    }
}
    
