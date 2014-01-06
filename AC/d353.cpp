#include<iostream>
using namespace std;

int main()
{
  string sa[31]={"1","11","21","1211","111221"};
  int ia=1;
  for(int i=5;i<31;i++)
  {
    sa[i]="";
    for(int j=1;j<sa[i-1].size();j++)
      if(sa[i-1][j-1]==sa[i-1][j])ia++;
      else
      {
        sa[i]+=(char)('0'+ia);
        sa[i]+=sa[i-1][j-1];
        ia=1;
      }
    sa[i]+=(char)('0'+ia);
    sa[i]+=sa[i-1][sa[i-1].size()-1];
    ia=1;
  }
  while(cin>>ia)cout<<sa[ia]<<endl;
  //system("pause");
}
