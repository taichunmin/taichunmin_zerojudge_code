#include<iostream>
using namespace std;

int main()
{
  int a,b,c,d;
  while(cin>>a>>b>>c)
  {
    d=a/10;
    if(d<(c/10))d=c/10;
    cout<<a<<" 個餅乾，"<<b+d<<" 盒巧克力，"<<c<<" 個蛋糕。"<<endl;
  }
}
