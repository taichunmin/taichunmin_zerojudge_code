#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int ta,ia,ib,ic,id;
  cin>>ta;
  for(int i=0;i<ta;i++)
  {
    scanf("%d %d",&ia,&ib);
    ic=floor((ia/2)*ib*0.4);
    id=floor(ia*ib*0.188);//無條件捨去 
    if(ic>id)printf(": )\n");
    else if(ic<id)printf("8-12=-4\n");
    else printf("SAME\n");
  }
  //system("pause");
}
