#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;

int aa[1000000];
int cmp(const void * a,const void * b)
{
    return *(int*)a-*(int*)b;
}

int main()
{
    int ia;
    while(scanf("%d",&ia)!=EOF)
    {
        for(int i=0;i<ia;i++) scanf("%d",&aa[i]);
        qsort(aa,ia,sizeof(int),cmp);
        for(int i=0;i<ia;i++) printf("%d%c",aa[i],((ia-1==i)?'\n':' '));
    }
    //system("pause");
}
