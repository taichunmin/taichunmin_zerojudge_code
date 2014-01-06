#include<iostream>
using namespace std;

int main()
{
  int ia;
  while(cin>>ia)
  {
    /*
    int sum_a=1,sum_b=1,sum_c=1;
    for(int i=2;i<=50;i++)
    {
      if(i>2)sum_c+=ia;
      sum_b+=sum_c;
      sum_a+=sum_b;
    }
    cout<<sum_a<<endl;
    */
    cout<<19600*ia+1275<<endl;
  }
}
