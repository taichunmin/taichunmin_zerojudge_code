#include<iostream>  
using namespace std;  
int main()
{  
    long long x,y=0,z[31];  
    while(cin>>x)
    {  
        while(x!=0)
        {  
            z[y]=x%2;  
            x=x/2;  
            y++;  
        }  
        y--;  
        while(y>=0)
        {  
            cout<<z[y];  
            y--;  
        }  
        cout<<endl;  
        y=0;  
    }  
} 
