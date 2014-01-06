//608
#include<iostream>
using namespace std;
int main()
{
  int coin[12];
  bool ba[12];
  int ta;
  cin>>ta;
  for(int t1=0;t1<ta;t1++)
  {
    for(int i=0;i<12;i++)coin[i]=0;
    string sa[3];
    for(int i=0;i<3;i++)
    {
      for(int j=0;j<3;j++)cin>>sa[j];
      if(sa[2][0]=='e')
      {
        for(int j=0;j<2;j++)
          for(int k=0;k<sa[j].size();k++)
            coin[sa[j][k]-'A']=2;
      }
      else
      {
        for(int j=0;j<12;j++)ba[j]=false;
        for(int j=0;j<2;j++)
          for(int k=0;k<sa[j].size();k++)
          {
            ba[sa[j][k]-'A']=true;
            if(coin[sa[j][k]-'A']==1+2*(j^(sa[2][0]=='d')))//相異 
              coin[sa[j][k]-'A']=2;//真硬幣 
            else if(coin[sa[j][k]-'A']==0)//未紀錄 
              coin[sa[j][k]-'A']=1+2*(j^(sa[2][0]=='u'));
          }
        for(int j=0;j<12;j++)
          if(ba[j]==false)coin[j]=2;//真硬幣 
      }
    }
    for(int i=0;i<12;i++)
      if(coin[i]!=2)
      {
        cout<<(char)(i+'A')<<" is the counterfeit coin and it is ";
        if(coin[i]==1)cout<<"light";
        else cout<<"heavy";
        cout<<'.'<<endl;
      }
  }
}
