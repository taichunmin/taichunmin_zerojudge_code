#include<iostream>
using namespace std;

int main()
{
  int ca[50],cb[50],cc[100];
  char input[50],oper;
  while(cin>>input>>oper)
  {
    int la=strlen(input),lb=0,lc=0;
    for(int i=0;i<la;i++)ca[i]=input[i]-'0';
    cin>>input;
    lb=strlen(input);
    for(int i=0;i<lb;i++)cb[i]=input[i]-'0';
   
    for(int i=0;i<100;i++)cc[i]=0;
    
    if(oper=='*')
    {
      for(int i=0;i<la/2;i++)ca[la-1-i]^=ca[i]^=ca[la-1-i]^=ca[i];
      for(int i=0;i<lb/2;i++)cb[lb-1-i]^=cb[i]^=cb[lb-1-i]^=cb[i];
      if((la==1 && ca[0]==0) || (lb==1 && cb[0]==0))
      {
        cout<<0<<endl;
        continue;
      }
     
      int ta;
      for(int i=0;i<la;i++)
        for(int j=0;j<lb && ca[i]!=0;j++)
        {
          ta=ca[i]*cb[j];
          if(i+j+1>lc && ta%10!=0)lc=i+j+1;
          cc[i+j]+=ta%10;
          if(i+j+2>lc && ta/10!=0)lc=i+j+2;
          cc[i+j+1]+=ta/10;
        }
      for(int i=0;i<lc;i++)
      {
        if(i==lc-1 && cc[i]/10!=0)lc++;
        cc[i+1]+=cc[i]/10;
        cc[i]%=10;
      }
      for(int i=lc-1;i>-1;i--)cout<<cc[i];
      cout<<endl;
    }
    else if(oper=='/')
    {
      if(la==1 && ca[0]==0)
      {
        cout<<0<<endl;
        continue;
      }
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
      for(int i=0;i<lc;i++)
        if(cc[i]!=0)
        {
          for(int j=i;j<lc;j++)cout<<cc[j];
          break;
        }
      cout<<endl;
    }
  }
}
