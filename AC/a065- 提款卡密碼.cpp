#include<iostream>
using namespace std;

int main()
{
  string sa;
  while(cin>>sa)
  {
    for(int i=0;i<6;i++)
      cout<<((sa[i+1]-sa[i]>0)?sa[i+1]-sa[i]:sa[i]-sa[i+1]);
    cout<<endl;
  }
  //system("pause");
}
