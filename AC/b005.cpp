#include<iostream>
using namespace std;
int main()
{
  int ia[100][100];
  int ta,ib,ic,id,ie;
  bool ba;
  while(cin>>ta)
  {
    for(int i=0;i<ta;i++)
      for(int j=0;j<ta;j++)
        cin>>ia[i][j];
    ib=ic=0;
    for(int i=0;i<ta;i++)
    {
      ba=false;
      for(int j=0;j<ta;j++)
        if(ia[i][j]==1)ba=!ba;
      if(ba)
      {
        ib++;
        id=i;
      }
    }
    for(int i=0;i<ta;i++)
    {
      ba=false;
      for(int j=0;j<ta;j++)
        if(ia[j][i]==1)ba=!ba;
      if(ba)
      {
        ic++;
        ie=i;
      }
    }
    if(ib==0 && ic==0)cout<<"OK"<<endl;
    else if(ib==1 && ic==1)cout<<"Change bit ("<<id+1<<','<<ie+1<<')'<<endl;
    else cout<<"Corrupt"<<endl;
  }
  //system("pause");
}
