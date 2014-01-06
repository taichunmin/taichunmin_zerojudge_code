#include<iostream>
using namespace std;

int main()
{
  int a;
  while(cin>>a)
  {
    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(3);
    cout<<(a-32.0)*5/9<<endl;
  }
}

/*
int main()
{
    double da;
    while(cin>>da)
    {
        printf("%.3lf\n",(da-32)*5/9);
    }
}
*/
