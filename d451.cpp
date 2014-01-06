#include<iostream>
using namespace std;

int main()
{
  int za,ia,ib;
  cin>>za;
  string sa;
  while(za--)
  {
    ib=0;
    cin>>sa>>ia;
    bool notzero=false,afterpoint=false,sign=false;
    for(int i=0;i<sa.size();i++)
    {
      switch(sa[i])
      {
      case '-':
        sign=true;
        break;
      case '.':
        afterpoint=true;
        if(notzero)i=sa.size();
        break;
      case '1'...'9':
        if(notzero)ib++;
        if(afterpoint)ib--;
        notzero=true;
        if(afterpoint)i=sa.size();
        break;
      case '0':
        if(afterpoint)ib--;
        if(notzero)ib++;
        break;
      }
    }
    notzero=false;
    int ic=0;
    for(int i=0;i<sa.size();i++)
      if('0'<=sa[i] && sa[i]<='9')
      {
        if(!notzero && sa[i]!='0')notzero=true;
        if(notzero)sa[ic++]=sa[i];
      }
    sa.resize(ic);
    if(ia+1>sa.size())sa.append((int)(ia+1-sa.size()),'0');
    sa[ia]+=5;
    bool carry=false;
    for(int i=ia;i>-1;i--)
    {
      sa[i]+=carry;
      carry=false;
      if(sa[i]-'0'>9)
      {
        carry=true;
        sa[i]=(sa[i]-'0')%10+'0';
      }
    }
    if(carry)
    {
      sa="1"+sa;
      ib++;
    }
    if(ia>1)
      printf("%c.%-0.*sx10(%d)\n",sa[0],ia-1,&sa.c_str()[1],ib);
    else
      printf("%cx10(%d)\n",sa[0],ib);
    //cout<<sa<<"x10("<<ib<<")"<<endl;
  }
  //system("pause");
}
