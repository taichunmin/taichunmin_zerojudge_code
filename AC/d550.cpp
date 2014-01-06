#include<iostream>
using namespace std;

int ia,ib;
int comp(const void* pa,const void* pb)
{
  int ic=0;
  while(*( *(int**)pa +ic) == *( *(int**)pb +ic) && ic<ib-1)ic++;
  return *( *(int**)pa +ic)-*( *(int**)pb +ic);
}

int main()
{
  int *va[10000];
  while(cin>>ia>>ib)
  {
    for(int i=0;i<ia;i++)
    {
      va[i]=new int[ib];
      for(int j=0;j<ib;j++)
        scanf("%d",va[i]+j);
    }
    qsort(va,ia,sizeof(int*),comp);
    for(int i=0;i<ia;i++)
    {
      for(int j=0;j<ib;j++)
        printf("%d%c",*(va[i]+j),(j==ib-1?'\n':' '));
      delete [] va[i];
    }
  }
  //system("pause");
}
