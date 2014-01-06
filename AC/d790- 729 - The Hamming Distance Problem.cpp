#include<iostream>
using namespace std;

struct ta_t
{
  string s;
  int a,b;
};
void fa(ta_t ta,int fia)
{
  ta.s[fia]='0';
  ta.b--;
  if(ta.b==0)
  {
    printf("%s\n",ta.s.c_str());
    return;
  }
  for(int i=fia+1;i<ta.s.size();i++)
    if(ta.s[i]='1')fa(ta,i);
}

int main()
{
  int ta;
  cin>>ta;
  for(int t1=0;t1<ta;t1++)
  {
    if(t1)printf("\n");
    ta_t ta;
    cin>>ta.a>>ta.b;
    ta.b=ta.a-ta.b;
    ta.s.assign(ta.a,'1');
    if(ta.b==0)
    {
      printf("%s\n",ta.s.c_str());
    }
    else for(int i=0;i<ta.s.size();i++)
      if(ta.s[i]='1')fa(ta,i);
  }
  //system("pause");
}
