#include<iostream>
#include<sstream>
using namespace std;

int main()
{
  char ca[10000];
  while(cin.getline(ca,10000))
  {
    istringstream ssin(ca);
    double total=0,ib;
    int ia;
    char cb;
    while(ssin>>ia>>cb>>ib)
      if(ia%2)total+=ib;
      else total-=ib;
    cout<<total<<endl;
  }
}
