#include<iostream>
#define LENGTH 1000000
//э跑计ㄓэ祘Α矪瞶计
//计禫祘Α禫е 
using namespace std;

char ca[LENGTH],cb[LENGTH],cc[LENGTH];
int main()
{
  int la,lb,lc;
  while(cin>>ca>>cb)
  {
    la=strlen(ca);
    lb=strlen(cb);
    
    bool bb=false;
    for(int i=0;i<lb;i++)
      if(cb[i]!='0')bb=true;
    if(!bb)
    {
      cout<<"岿粇块 埃计ぃ箂"<<endl;
      continue;
    }
    
    lc=0;
    //cout<<ca<<" ∫ "<<cb<<" = "; 
    for(int i=0;i<la;i++)ca[i]-='0';
    for(int i=0;i<lb;i++)cb[i]-='0';
    for(int i=0;i<LENGTH;i++)cc[i]=0;
    
    for(int i=lb-1;i<la;i++)
    {
      bool ba=true;
      while(ba)
      {
        if(!(i-lb>-1 && ca[i-lb]!=0))
          for(int j=0;j<lb;j++)
            if(ca[i-lb+1+j]!=cb[j])
            {
              if(ca[i-lb+1+j]<cb[j])
                ba=false;
              break;
            }
        if(ba)
        {
          for(int j=lb-1;j>-1;j--)
          {
            ca[i-lb+1+j]-=cb[j];
            if(ca[i-lb+1+j]<0)
            {
              ca[i-lb+j]--;
              ca[i-lb+1+j]+=10;
            }
          }
          cc[lc]++;
        }
      }
      lc++;
    }
    char *pa,*pc;
    pa=&ca[0],pc=&cc[0];
    if(lc==0)lc=1;
    while(*pa==0 && pa<(&ca[la-1]))pa++;
    while(*pc==0 && pc<(&cc[lc-1]))pc++; 
    for(int i=0;i<la;i++)ca[i]+='0';
    for(int i=0;i<lc;i++)cc[i]+='0'; 
    cout<<pa<<endl;
  }
} 
