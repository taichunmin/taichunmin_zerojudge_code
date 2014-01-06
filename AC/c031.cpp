#include<iostream>
using namespace std;

int main()
{
    int a,b,i;
    while(cin>>a)
    {
        b=a;
        for(i=1;i>=1;i++)
        {
            b-=i;
            if(b<=0)
            {
                b+=i;
                i++;
                break;
            }
        }
    if(i%2==0)cout<<"TERM "<<a<<" IS "<<i-b<<'/'<<b<<endl;
    else cout<<"TERM "<<a<<" IS "<<b<<'/'<<i-b<<endl;
    }
//system("pause");
}
