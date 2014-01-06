#include<iostream>
using namespace std;

int main()
{
  int ia,ib,ic,id=0;
  int va[]={31,28,31,30,31,30,31,31,30,31,30,31};
  while(cin>>ia>>ib>>ic)
  {
    if(ib==1 && ic==1)cout<<"It is 1 day in "<<ia<<endl;
    else if(ib<1 || 12<ib || ia<1 || ic<1 || ib!=2 && ic>va[ib-1])cout<<"Error"<<endl;// 1648 6 0
    else if(ib==2 && ic>28+(ia%4==0 && ia%100 || ia%400==0))cout<<"Error"<<endl;
    else
    {
      if(ib==2 && ic==29)ic=28;// 2000 2 29
      for(int i=0;i<ib-1;i++)
        ic+=va[i];
      cout<<"It is "<<ic+(ia%4==0 && ia%100 || ia%400==0)<<" days in "<<ia<<endl;
    }
  }
  //system("pause");
}
