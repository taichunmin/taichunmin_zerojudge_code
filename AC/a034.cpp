#include<iostream>
using namespace std;

int main()
{
    long long a;
    char ca[64];
    while(cin>>a)
    {
        int lengh=0;
        while(a!=0)
        {
            ca[lengh++]=a%2+'0';
            a/=2;
        }
        for(int i=lengh-1;i>-1;i--)cout<<ca[i];
        cout<<endl;
    }
}