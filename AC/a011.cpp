#include<iostream>
using namespace std;

int main()
{
  char ca[200000];
  int ia,ib;
  while(cin.getline(ca,200000))
  {
    ia=strlen(ca);
    ib=0;
    for(int i=0;i<ia;i++)
      if( (('A'<=ca[ i ] && ca[ i ]<='Z') || ('a'<=ca[ i ] && ca[ i ]<='z')) && 
         !(('A'<=ca[i+1] && ca[i+1]<='Z') || ('a'<=ca[i+1] && ca[i+1]<='z')))ib++;
    cout<<ib<<endl;
  }
}
