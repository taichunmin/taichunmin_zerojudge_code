#include<iostream>
using namespace std;
int main()
{
  int ia[26];
  for(int i=0;i<26;i++)ia[i]=i+1;
  string sa;
  while(cin>>sa)
  {
    int strl=sa.length(),total=0;
    if(strl==1 && sa[0]=='0')break;
    bool ba=true;
    for(int i=0;i<strl;i++)
    {
      if('A'<=sa[i] && sa[i]<='Z')total+=ia[sa[i]-'A'];
      else if('a'<=sa[i] && sa[i]<='z')total+=ia[sa[i]-'a'];
      else
      {
        ba=false;
        break;
      }
    }
    if(ba)cout<<total<<endl;
    else cout<<"Fail"<<endl;
  }
  system("pause");
}
