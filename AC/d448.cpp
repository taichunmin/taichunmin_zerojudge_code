#include<iostream>
using namespace std;
int main()
{
  double da,db,dc,dd,de;
  while(cin>>da>>db>>dc>>dd>>de)
  {
    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(6);
    cout<<(dd-de)*(db-dc)/(da-dc)+de<<endl;
  }
  system("pause");
}
