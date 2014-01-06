#include<iostream>
using namespace std;

int main()
{
     int num[3][1498]={0};
    for(int i=0;i<1498;i++)
    {
      int n=i+1;
      num[0][i]=(n+1)/2*((n+1)/2+(i%2));
      num[1][i]=num[0][i]+((n>5)?(num[1][i-5]):0);
      num[2][i]=num[1][i]+((n>10)?(num[2][i-10]):0);
    }
    int s;  
    while(cin>>s)
    {
      s/=5;
      cout<<num[2][s]<<endl;
    }
    system("pause");
}
