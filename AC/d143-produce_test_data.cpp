#include<iostream>
using namespace std;

int main()
{
  freopen("d143in.txt","w",stdout);
  //freopen("","r",stdin);
  srand(time(NULL));
  cout<<200<<endl;
  for(int i=0;i<200;i++)cout<<(rand()-10000)*rand()<<' '<<(rand()-10000)*rand()<<endl;
  cout<<2<<endl;
  cout<<"0 92"<<endl;
  cout<<"6 2"<<endl;
  //system("pause");
}
