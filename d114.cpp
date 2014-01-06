#include<iostream>
using namespace std;

string fa(string sa,string sb)
{
  string sc="";
  for(int i=0;i<sa.size();i++)
  {
    for(int j=0;j<sb.size();j++)
      if(i+j>=sc.size())
      {
        sc.resize(i+j+1);
        sc[i+j]=sa[i]*sb[j];
      }
      else sc[i+j]+=sa[i]*sb[j];
    for(int j=0;j<sc.size();j++)
    {
      if(j+1==sc.size() && sc[j]/10)sc.resize(sc.size()+1);
      sc[j+1]=sc[j]/10;
      sc[j]%=10;
    }
  }
  return sc;
}

int main()
{

  system("pause");
}
