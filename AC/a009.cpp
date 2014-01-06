#include<iostream>
using namespace std;

int main()
{
  char ca[100000];
  int ia;
  while(cin.getline(ca,100000))
  {
    ia=strlen(ca);
    for(int i=0;i<ia;i++)cout<<(char)(ca[i]-7);
    cout<<endl;
  }
}
