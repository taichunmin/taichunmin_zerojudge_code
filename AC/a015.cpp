#include<iostream>
using namespace std;

int main()
{
  int ia[100][100];
  int ib,ic;
  while(cin>>ib>>ic)
  {
    for(int i=0;i<ib;i++)
      for(int j=0;j<ic;j++)
        cin>>ia[i][j];
    for(int i=0;i<ic;i++)
    {
      for(int j=0;j<ib;j++)
      {
        if(j!=0)cout<<' ';
        cout<<ia[j][i];
      }
      cout<<endl;
    }
  }
}
