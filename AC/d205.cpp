#include<stdio.h>

int main()
{
  long long la,lb;
  unsigned long long ua;
  while(scanf("%lld %lld",&la,&lb)!=EOF)
  {
    while(lb>0)
    {
      la%=lb;
      la^=lb^=la^=lb;
    }
    ua=la;
    printf("%llu\n",ua*ua);
  }
  //system("pause");
}
