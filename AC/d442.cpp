//d442: Q10591: Happy Number 
#include<iostream>
using namespace std;

int main()
{
  int ia,ib,ic,id;
  cin>>id;
  for(int i=0;i<id;i++)
  {
    cin>>ia;
    ib=ia;
    bool va[1000]={};
    do
    {
      ic=0;
      if(ib<1000 && va[ib]==true)ib=ia;
      else
      {
        if(ib<1000)va[ib]=true;
        while(ib>0)
        {
          ic+=(ib%10)*(ib%10);
          ib/=10;
        }
        ib=ic;
      }
    }while(ia!=ib && ib!=1);
    if(ib==1)cout<<"Case #"<<i+1<<": "<<ia<<" is a Happy number."<<endl;
    else cout<<"Case #"<<i+1<<": "<<ia<<" is an Unhappy number."<<endl;
  }
}
