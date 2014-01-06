#include<iostream>
#include<sstream>
using namespace std;

string fa(string sa,string sb,string sc)
{
  string sd="";
  for(int i=0;sb=="and" && i<5;i++)sd+=char((sa[i]-'0')&&(sc[i]-'0'))+'0';
  for(int i=0;sb=="or" && i<5;i++)sd+=char((sa[i]-'0')||(sc[i]-'0'))+'0';
  return sd;
}

int main()
{
  string sa,sb,sc;
  istringstream sin;
  while(getline(cin,sa))
  {
    sin.clear();
    sin.str(sa);
    sin>>sa;
    cout<<sa;
    while(sin>>sb>>sc && cout<<((sb=="and")?"&&":"||")<<sc)
      sa=fa(sa,sb,sc);
    cout<<" = ";
    cout<<sa<<endl;
  }
  //system("pause");
}
