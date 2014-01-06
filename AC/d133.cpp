#include<iostream>
using namespace std;

int main()
{
    long long num[3][6001]={0};
    for(int i=0;i<6001;i++)
    {
      int n=i+1;
      num[0][i]=(n+1)/2*((n+1)/2+(i%2));
      num[1][i]=num[0][i]+((n>5)?(num[1][i-5]):0);
      num[2][i]=num[1][i]+((n>10)?(num[2][i-10]):0);
    }
    int s,t;  
    while(cin>>s)
    {
      t=s;
      s/=5;
      if(num[2][s]-1)
        cout<<"There are "<<num[2][s]<<" ways to produce "<<t<<" cents change."<<endl;
      else
        cout<<"There is only 1 way to produce "<<t<<" cents change."<<endl;
    }
}
