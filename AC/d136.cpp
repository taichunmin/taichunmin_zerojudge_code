#include<stdio.h>
unsigned long long na[2][1000000];

inline unsigned long long input()  
{  
  char cha;  
  unsigned long long x=0;  
  while((cha=getchar())==' ' || cha=='\n');
  x=cha-48;  
  while((cha=getchar())!=' ' && cha!='\n')
    x=x*10+cha-48;
  return x;
}

int main()
{
  int ta,tb,icount,ia,ib;
  //while(!=EOF)
  //{
    scanf("%d %d",&ta,&tb);
    for(int ti=0;ti<ta;ti++)
    {
      icount=ia=ib=0;
      for(int i=0;i<2;i++)
        for(int j=0;j<tb;j++)na[i][j]=input();
      for(;ia<tb;ia++)
        for(;ib<tb && na[0][ia]>=na[1][ib];ib++)
          if(na[0][ia]==na[1][ib])
          {
            icount++;
            ib++;
            break;
          }
      printf("%d\n",icount);
    }
  //}
}
