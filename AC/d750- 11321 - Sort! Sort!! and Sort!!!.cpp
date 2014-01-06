#include<iostream>
using namespace std;

int ia,ib;

int cmp(const void* fia,const void* fib)
{
  int a=*(int*)fia,b=*(int*)fib,c=a%ib,d=b%ib;
  if(c<d)return -1;
  if(c>d)return 1;
  c=a&1;d=b&1;
  if(c!=d)return d-c;
  if(c)return b-a;
  return a-b;
}

int main()
{
  int va[10000];
  while(cin>>ia>>ib)
  {
    printf("%d %d\n",ia,ib);
    if(ia==0 && ib==0)break;
    for(int i=0;i<ia;i++)scanf("%d",&va[i]);
    qsort(va,ia,sizeof(int),cmp);
    for(int i=0;i<ia;i++)printf("%d\n",va[i]);
  }
  //system("pause");
}
