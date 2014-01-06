#include<iostream>
#include<sstream>
using namespace std;

int main()
{
  string sa;
  istringstream fin;
  long long la,lb,lc;
  while(getline(cin,sa))
  {
    if(sa=="0 0")break;
    fin.clear();
    fin.str(sa);
    fin>>la;
    if(la==-1)
    {
      lc=0;
      printf("%d\n",(sa[sa.size()-1]%2==0)*2-1);
      continue;
    }
    else if(la==0)
    {
      printf("0\n");
      continue;
    }
    fin>>lb;
    lc=1;
    while(lb>0)
    {
      if(lb%2)lc*=la;
      la*=la;
      lb/=2;
    }
    printf("%lld\n",lc);
  }
  la=0;
  while(gets(sa.str()))la++;
  printf("All Over. Exceeded %lld lines!\n",la);
  //system("pause");
}
