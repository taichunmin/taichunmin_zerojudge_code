#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    unsigned long long n,m,c=1,d;
    while(cin>>n>>m)
    {
      if(n%2)n*=((n+1)/2);
      else n=n/2*(n+1);
      if(m%2)m*=((m+1)/2);
      else m=m/2*(m+1);
      cout<<m*n<<endl;
    }
}
