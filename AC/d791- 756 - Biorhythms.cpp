#include<iostream>
using namespace std;

int va[23][28][33]={};

int main()
{
  for(int i=21252;i>0;i--)
    va[i%23][i%28][i%33]=i;
  int ia,ib,ic,id,t1=0;
  while(scanf("%d %d %d %d",&ia,&ib,&ic,&id)!=EOF)
  {
    if(ia+ib+ic+id==-4)break;
    t1++;
    printf("Case %d: the next triple peak occurs in %d days.\n",t1,(va[ia%23][ib%28][ic%33]+21251-id)%21252+1);
  }
  //system("pause");
}
