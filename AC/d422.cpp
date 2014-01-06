#include<iostream>
using namespace std;
int main()
{
  char ca;
  int ia=0;
  while(cin.get(ca))
  {
    if('0'<=ca && ca<='9')
    {
      ia+=ca-48;
    }
    else if(ca=='!' || ca=='\n')
    {
      cout<<endl;
    }
    else
    {
      if(ca!='b')for(int i=0;i<ia;i++)cout<<ca;
      else for(int i=0;i<ia;i++)cout<<' ';
      ia=0;
    }
  }
  //system("pause");
}
