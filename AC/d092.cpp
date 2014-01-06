#include<iostream>
using namespace std;

int main()
{
  int ta;
  ios::sync_with_stdio(false);
  int va[1000][2];
  while(cin>>ta,ta)
  {
    int ia,ib;
    for(int i=0;i<ta;i++)
    {
      cin>>ia>>ib;
      if(ia<ib)va[i][1]=1;
      else if(ia==ib)va[i][1]=2;
      else va[i][1]=3;
      va[i][0]=ia+ib;
    }
    for(int i=0;i<ta;i++)
      for(int j=i+1;j<ta;j++)
        if((va[i][0]+va[i][1]*0.25)<(va[j][0]+va[j][1]*0.25))
        {
          va[i][0]^=va[j][0]^=va[i][0]^=va[j][0];
          va[i][1]^=va[j][1]^=va[i][1]^=va[j][1];
        }
    for(int i=0;i<ta;i++)
    {
      if(i!=0)cout<<' ';
      switch(va[i][1])
      {
      case 1:cout<<'<'; break;
      case 2:cout<<'='; break;
      case 3:cout<<'>'; break;
      }
      cout<<va[i][0];
    }
    cout<<endl;
  }
}
  
