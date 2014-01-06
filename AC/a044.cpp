#include<iostream>
using namespace std;

int main()
{
  int ia;
  while(cin>>ia)
  {
    cout<<ia*(ia+1)*(ia-1)/6+ia+1<<endl;
  }
}
