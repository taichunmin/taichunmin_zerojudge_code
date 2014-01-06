#include<iostream>
using namespace std;

int main()
{
  int ia;
  while(cin>>ia)
    cout<<(ia>5)*590+(ia>11)*200+(ia>17)*100-(ia>59)*491<<endl;
  //system("pause");
}
