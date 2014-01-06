#include<iostream>
#include<cstdio>
using namespace std;

long long arr[200000],sum[200000];

int main()
{
    int ia,ib,ic,id;
    while(cin>>ia>>ib)
    {
        for(int i=0;i<ia;i++)
        {
            cin>>arr[i];
            sum[i] = arr[i] + (i>=1?sum[i-1]:0);
        }
        while(ib--)
        {
            cin>>ic>>id;
            cout<< sum[id-1] - (ic>=2?sum[ic-2]:0) <<endl;
        }
    }
}
