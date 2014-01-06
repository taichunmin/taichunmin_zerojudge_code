#include<iostream>
using namespace std;

int ia[100];
int ib,ic,id;
int fa(int na,int nb)
{
  int nc=0;
  for(int i=nb;i<ic;i++)
  {
    if(na>ia[i])nc++;
    nc+=fa(na+ia[i],i+1);
  }
  return nc;
}
int main()
{
    char ca; 
    while(cin>>ib && cin.get(ca))
    {
      if(ib==0)break;
      ic=id=0;
      ia[ic++]=ib;
      while(ca==' ')
      {
        cin>>ib;
        cin.get(ca);
        ia[ic++]=ib;
      }
      for(int i=0;i<ic;i++)
        for(int j=i+1;j<ic;j++)
          if(ia[i]>ia[j])ia[i]^=ia[j]^=ia[i]^=ia[j];
      for(int i=0;i<ic-1;i++)id+=fa(ia[i],i+1);
      cout<<id<<endl;
    }
    system("pause");
}
