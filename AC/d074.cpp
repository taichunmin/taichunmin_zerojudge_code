#include<iostream>
using namespace std;

int main()
{
  int ta,a,b;
  while(cin>>ta)
  {
    a=0;
    for(int i=0;i<ta;i++)
    {
      cin>>b;
      if(b>a)a=b;
    }
    cout<<a<<endl;
  }
}
