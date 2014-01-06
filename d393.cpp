#include<iostream>
using namespace std;

bool input(long long &x)  
{  
  char cha;  
  x=0;  
  while(1)
  {
    if(!cin.get(cha))return 0;
    if('0'<=cha && cha<='9')break;
  }
  x=cha-48;
  while(cha=getchar() && '0'<=cha && cha<='9')
    x=x*10+cha-48;
  return 1;
}

int main()
{
  long long la=0,lb;
  while(input(lb))la+=lb;
  cout<<la<<endl;
  system("pause");
}
