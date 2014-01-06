#include<iostream>
using namespace std;

int main()
{
  int ta;
  cin>>ta;
  int ia,ib;
  string sa;
  for(int i=0;i<ta;i++)
  {
    cin>>ia>>sa;
    ib=sa.length();
    for(int j=0;j<ib;j++)
      sa[j]=(sa[j]-39-ia)%26+'A';
    cout<<sa<<endl;
  }
}
