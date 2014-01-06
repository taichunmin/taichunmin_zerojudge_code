#include<iostream>  
using namespace std;  

int main()  
{  
  char ca[][40]={"a leap year","a normal year"};  
  int ia,ib;
  cin>>ib;
  for(int i=0;i<ib;i++)
  {  
    cin>>ia;
    if(ia%400==0)ia=0;  
    else if(ia%100==0)ia=1;  
    else if(ia%4==0)ia=0;  
    else ia=1;  
    cout<<ca[ia]<<endl;
  }
} 
