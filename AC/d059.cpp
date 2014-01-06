#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;

int main()
{
    int a,b,c;
    
    cin>>a>>b;
    cout<<pow(a+.0,b+.0)<<endl;
    
    cin>>a;
    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(3);
    cout<<sqrt(a+.0)<<endl;
    
    cin>>a;
    if(a<0)cout<<a*-1;
    else cout<<a;
    cout<<endl;
    
    cin>>a>>b;
    cout<<a<<endl;
}
