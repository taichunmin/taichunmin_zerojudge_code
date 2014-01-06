#include<iostream>
using namespace std;

int va[500000];
int cmp(const void* fia,const void* fib)
{
  int a=*(int*)fia,b=*(int*)fib;
  if(a<0)a=-a;
  if(b<0)b=-b;
  return a-b;
}

int main()
{
  int ta;
  cin>>ta;
  for(int t1=0;t1<ta;t1++)
  {
    int ia,ib=1;
    scanf("%d",&ia);
    for(int i=0;i<ia;i++)
      scanf("%d",&va[i]);
    qsort(va,ia,sizeof(int),cmp);
    for(int i=0;i<ia-1;i++)
      if(((long long)va[i])*va[i+1]<0)ib++;
    printf("%d\n",ib);
  }
  //system("pause");
}
