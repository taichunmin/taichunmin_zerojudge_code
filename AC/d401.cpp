#include<iostream>
using namespace std;
int va[1000000];
int comp(const void*a,const void*b)
{
  return *(int*)b-*(int*)a;
}
int main()
{
  int ia,ib,ic;
  cin>>ia;
  for(int i=0;i<ia;i++)
  {
    cin>>ib>>ic;
    va[i]=ic*((ib==2)?-1:1);
  }
  qsort(va,ia,sizeof(int),comp);
  cin>>ib;
  ic=-va[ia-ib];
  ib=va[ib-1];
  if(ib>ic)cout<<"1 "<<ib-ic<<endl;
  else cout<<"2 "<<ic-ib<<endl;
  //system("pause");
}
