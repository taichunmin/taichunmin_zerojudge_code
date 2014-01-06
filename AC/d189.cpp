#include<iostream>
using namespace std;

int main()
{
    int a;
    while(cin>>a)
    {
      int b[3]={0};
      bool d[3]={0};
      for(int i=0;i<3;i++)
      {
        int c=a;
        int emply=i;
        while(c+emply>2 || c>0)
        {
          b[i]+=c;
          c+=emply;
          emply=c%3;
          c/=3;
        }
        if(emply>=i)d[i]=true;
      }
      int Max=b[0];
      if(b[1]>Max && d[1])Max=b[1];
      if(b[2]>Max && d[2])Max=b[2];
      cout<<Max<<endl;
      //cout<<b[0]<<' '<<b[1]<<' '<<b[2]<<' '<<endl;
    }
}
