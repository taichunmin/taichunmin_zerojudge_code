#include<iostream>
using namespace std;
int main()
{
  long long la,lb;
  while(cin>>la>>lb,la+lb)
  {
    if(lb>=la)cout<<"Fair"<<endl;
    else cout<<"Unfair"<<endl;
  }
  system("pause");
}
