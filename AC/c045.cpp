//490
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string sa[1000];
  int ia=0,max_len=0;
  while(getline(cin,sa[ia]))ia++;
  for(int i=0;i<ia;i++)
    for(int j=0;j<sa[i].size();j++)
      if(sa[i][j]<32)
      {
        sa[i].erase(j);
        j--;
      }
  for(int i=0;i<ia;i++)
    if(max_len<sa[i].size())max_len=sa[i].size();
  for(int i=0;i<ia;i++)
    sa[i].append(max_len-sa[i].size(),' ');
  for(int i=0;i<max_len;i++)
  {
    for(int j=ia-1;j>-1;j--)cout<<sa[j][i];
    cout<<endl;
  }
  //system("pause");
}
