#include<iostream>
#include<cstdlib>
using namespace std;

int comp(const void* ia,const void* ib)
{
  return *(int*)ia-*(int*)ib;
}

int main()
{
  int ta,ib;
  int ia[1000];
  double da;
  while(cin>>ta,ta)
  {
    for(int i=0;i<ta;i++)cin>>ia[i];
    ib=0;
    qsort(ia,ta,sizeof(int),comp);
    //for(int i=0;i<ta;i++)cout<<ia[i]<<' ';
    for(int i=0;i<ta;i++)ib+=ia[i];
    da=(ib+.0)/ta;
    ib=0;
    for(int i=0;i<ta;i++)
      if(da>ia[i])ib++;
    cout<<ib<<endl;
  }
  system("pause");
}
