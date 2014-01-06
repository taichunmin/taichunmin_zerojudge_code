#include<iostream>
using namespace std;

void fa(string fsa,char fca,int fia)
{
  fsa+=fca;
  if(fia>0)
  {
    fa(fsa,'0',fia-1);
    fa(fsa,'1',fia-1);
  }
  else printf("%s\n",fsa.c_str());
}

int main()
{
  int ia;
  while(cin>>ia)
  {
    fa("",'0',ia-1);
    fa("",'1',ia-1);
  }
  //system("pause");
}
