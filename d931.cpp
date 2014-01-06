#include<iostream>
using namespace std;

int da[100000][4];

int main()
{
  int cse;
  cin>>cse;
  while(cse>0)
  {
    int ia;
    cin>>ia;
    for(int i=0;i<ia;i++)
      for(int j=0;j<4;j++)cin>>da[i][j];
    double x,y,r;
    cin>>x>>y>>r;
    cse--;
  }
  system("pause");
}
