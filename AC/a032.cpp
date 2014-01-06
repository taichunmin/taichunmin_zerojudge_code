#include<iostream>
using namespace std;

long long f1(long long a)
{
    if(a==0)return 1;
    if(a==1)return 1;
    if(a>1)return a*f1(a-1);
}

int main()
{
    long long a;
    while(cin>>a)cout<<f1(a)<<endl;
}
