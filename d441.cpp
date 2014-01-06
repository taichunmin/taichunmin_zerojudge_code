#include<iostream>
using namespace std;

int main()
{
  int ia,ib,ic,ta;
  cin>>ta;
  for(int t1=0;t1<ta;t1++)
  {
    cin>>ib>>ia;
    ic=0;
    while(ia>0)
    {
      ia/=ib;
      ic+=ia;
    }
    cout<<"Case "<<t1+1<<':'<<endl<<ic<<endl;
  }
  system("pause");
}
