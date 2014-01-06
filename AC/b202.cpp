#include<iostream>
using namespace std;

int main()
{
    int ta;
    cin>>ta;
    int a[3];
    for(int ti=0;ti<ta;ti++)
    {
        for(int i=0;i<3;i++)cin>>a[i];
        for(int i=0;i<3;i++)
            for(int j=i+1;j<3;j++)
                if(a[i]>a[j])a[i]^=a[j]^=a[i]^=a[j];
        if(a[0]!=a[1] && a[1]!=a[2])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
        
