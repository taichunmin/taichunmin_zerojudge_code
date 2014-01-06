//d420: Q694: The Collatz Sequence 
#include<iostream>
using namespace std;

int main()
{
  long long la,lb;
  int ic=0,id;
  while(cin>>la>>lb,(la>-1 && lb>-1))
  {
    ic++;
    cout<<"Case "<<ic<<": A = "<<la<<", limit = "<<lb<<", number of terms = ";
    lb=(lb-1)/3;
    id=1;
    while(la>1)
    {
      if(la%2)
      {
        if(la>lb)break;
        la=la*3+1;
      }
      else la/=2;
      id++;
    }
    cout<<id<<endl;
  }
}
