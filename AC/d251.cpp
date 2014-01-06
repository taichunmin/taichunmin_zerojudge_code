#include<iostream>
#include<cmath>
using namespace std;

int fa(char ca)
{
  switch(ca)
  {
    case 'I':
      return 1;
    case 'V':
      return 5;
    case 'X':
      return 10;
    case 'L':
      return 50;
    case 'C':
      return 100;
    case 'D':
      return 500;
    case 'M':
      return 1000;
  }
}
string fa(int ia, int ib=0)
{
    string sa[4][10]={{"","I","II","III","IV","V","VI","VII","VIII","IX"},
                      {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
                      {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
                      {"","M","MM","MMM","","","","","",""}};
    return sa[ib][ia];
}

int main()
{
  char ca[50],cb[50];
  int ia,ib,ic,id;
  while(scanf("%s",ca)!=EOF)
  {
    scanf("%s",cb);
    ia=ib=ic=id=0;
    for(int i=0;i<strlen(ca);i++)
    {
      ib=fa(ca[i]);
      if(ia<ib)ic-=ia;
      else ic+=ia;
      ia=ib;
    }
    ic+=ia;
    ia=0;
    for(int i=0;i<strlen(cb);i++)
    {
      ib=fa(cb[i]);
      if(ia<ib)id-=ia;
      else id+=ia;
      ia=ib;
    }
    id+=ia;
    id+=30;
    ic+=7+(id/60);
    id%=60;
    ic%=24;
    for(int i=1;i>-1;i--)
      cout<<fa(ic/(int)pow(10.0,i+0.0)%10,i);
    printf("\n");
    for(int i=1;i>-1;i--)
      cout<<fa(id/(int)pow(10.0,i+0.0)%10,i);
    printf("\n");
  }
}
