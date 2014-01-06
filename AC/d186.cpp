#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c,d;
    while(cin>>a>>b,a+b)
    {
      c=(int)sqrt(a+0.0);
      d=(int)sqrt(b+0.0);
      cout<<d-c+(c*c==a)<<endl;
    }
    //system("pause");
}
