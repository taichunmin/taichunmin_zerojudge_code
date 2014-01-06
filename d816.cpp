#include<iostream>
using namespace std;

int Input() {  
    char cha;  
    unsigned int x = 0;  
    while(cha = getchar())  
        if(cha != ' ' && cha != '\n' || cha == EOF) break;  
    if(cha == EOF) return EOF; 
    x = cha-48;  
    while(cha = getchar()) {  
        if(cha == ' ' || cha == '\n') break;  
        x = x*10 + cha-48;  
    }  
    return x;  
}

int main()
{
  int ia,ib,temp;
  int va[20];
  while((ia=Input())!=EOF)
  {
    ib=Input();
    for(int i=0;i<ia;i++)
      va[i]=Input();
    for(int i=ia,j=i%ia;i<ib;i++,j=i%ia)
    {
      temp=va[j];
      va[j]=Input();
      temp-=va[j];
      if(temp<0)temp=-temp;
      temp= temp/ia+( (temp%ia==0)?0:1 );
      if(i!=ia)printf(" ");
      printf("%d",temp);
    }
    printf("\n");
  }
  //system("pause");
}
