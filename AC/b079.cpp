#include<iostream>
using namespace std;
/*
int fa(int ia)
{
  if(ia<=2)return 1;
  else return fa(ia-fa(ia-1))+fa(ia-1-fa(ia-2));
}
*/
int ia[1000000]={1,1};
int main()
{
  int ta;
  for(int i=2;i<1000000;i++)ia[i]=ia[i-ia[i-1]]+ia[i-1-ia[i-2]];
  while(cin>>ta,ta)cout<<ia[ta-1]<<endl;
  system("pause");
}
