#include<iostream>
using namespace std;

string randname(int ia=100)
{
  string sa;
  int tc=rand()%ia+1;
  for(int k=0;k<tc;k++)sa.append((char)('a'+rand()%26));
  return sa;
}

int main()
{
  srand(time(NULL));
  int ia=10,ib=10,ic=10;//多少筆測資,商品數量,商家數量 
  string sa[1000];
  for(int i=0;i<ia;i++)
  {
    int ta=rand()%ib+1,tb=rand()%ic+1;
    cout<<ta<<' '<<tb<<endl;
    for(int j=0;j<ta;j++)sa[j]=randname();
    
  }
  cout<<"0 0"<<endl;
  system("pause");
}
