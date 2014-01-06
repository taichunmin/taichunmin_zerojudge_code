#include<iostream>
using namespace std;

int aa[10000][1001];
int comp(const void* ia,const void* ib)
{
  return *(int*)ia-*(int*)ib;
}

int main()
{
    int ia,ib,ic,id;
    while(scanf("%d %d",&ia,&ib)==2)
    {
      for(int i=0;i<ia;i++)
        aa[i][1000]=0;
      for(int i=0;i<ib;i++)
      {
        scanf("%d %d",&ic,&id);
        aa[ic-1][aa[ic-1][1000]++]=id;
      }
      for(int i=0;i<ia;i++)
        qsort(aa[i],aa[i][1000],sizeof(int),&comp);//§Ö±Æ 
      cin>>ib;
      for(int i=0;i<ib;i++)
      {
        scanf("%d %d",&ic,&id);
        if(bsearch(&id,aa[ic-1],aa[ic-1][1000],sizeof(int),comp)!=NULL)printf("Yes\n");
        else printf("No\n");
      }
    }
    system("pause");
}
