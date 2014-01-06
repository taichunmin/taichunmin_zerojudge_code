#include<iostream>
using namespace std;

int cmp(const void* a,const void* b)
{
  return *(int*)a-*(int*)b;
}

int main()
{
  int ia,ib,ic,*id;
  int va[100000];
  scanf("%d %d",&ia,&ib);
  for(int i=0;i<ia;i++)scanf("%d",&va[i]);
  for(int i=0;i<ib;i++)
  {
    scanf("%d",&ic);
    id=(int*)bsearch(&ic,va,ia,sizeof(int),cmp);
    if(id==NULL)cout<<0<<endl;
    else cout<<id-va+1<<endl;
  }
  //system("pause");
}
