#include<iostream>
#include<sstream>
using namespace std;

int main()
{
  string sa;
  istringstream sin;
  long long la,lb;
  while(getline(cin,sa))
  {
    sin.clear();
    sin.str(sa);
    la=0;
    while(sin>>lb)la+=lb;
    cout<<la<<endl;
  }
  //system("pause");
}
