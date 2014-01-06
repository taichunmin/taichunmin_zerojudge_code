//c077: ACM 417 - Word Index
#include<iostream>
using namespace std;

int main()
{
  int ia[5][27]={};
  for(int i=0;i<26;i++)ia[0][i+1]=1;
  for(int i=1;i<5;i++)
    for(int j=25-i;j>-1;j--)
      ia[i][j+1]=ia[i][j+2]+ia[i-1][j+2];
  for(int i=3;i>-1;i--)
  {
    int ic=0;
    for(int j=0;j<26;j++)ic+=ia[i][j+1];
    for(int j=i+1;j<5;j++)ia[j][0]+=ic;
  }
  /*
  for(int i=0;i<27;i++,cout<<endl)
    for(int j=0;j<5;j++)
      cout<<ia[j][i]<<'\t';
  system("pause");
  */
  string sa;
  while(cin>>sa)
  {
    bool ba=true;
    for(int i=0;i<sa.size()-1 && ba;i++)
      if(sa[i]>=sa[i+1])ba=false;
    if(!ba)
    {
      cout<<0<<endl;
      continue;
    }
    int ib=ia[sa.size()-1][0];
    for(int i=0,j=0;i<sa.size();i++)
      for(int j=((i>0)?sa[i-1]-'a'+1:0);j<26 && j<sa[i]-'a';j++)
        ib+=ia[sa.size()-1-i][j+1];
    cout<<ib+1<<endl;
  }
  //system("pause");
}
