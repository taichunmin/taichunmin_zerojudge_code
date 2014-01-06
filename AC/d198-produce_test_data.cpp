#include<iostream>
using namespace std;

int main()
{
  //freopen("","r",stdin);
  freopen("d198in.txt","w",stdout);
  srand(time(NULL));
  bool ba[100],bb[100];
  int ia,ib,ic,id,ie;
  cout<<"200"<<endl;
  for(int ta=0;ta<202;ta++)
  {
    cout<<endl;
    if(ta<3)ia=100,ib=100;
    else ia=rand()%30+1,ib=rand()%30+1;
    cout<<ia<<' '<<ib<<endl;
    for(int i=0;i<ia;i++)ba[i]=false;
    
    for(int i=0;i<ia;i++)
    {
      ic=rand()%ia;
      if(ba[ic])
      {
        i--;
        continue;
      }
      else ba[ic]=true;
      cout<<ic+1;
      ie=0;
      for(int j=0;j<ib;j++)bb[j]=false;
      ic=rand()%((ib+1)/2);//可零 
      for(int j=0;j<ic;j++)
      {
        if(ie>100000)
        {
          //cout<<" ( 過多次的亂數碰撞: ic = "<<ic<<" j = "<<j<<" id = "<<id<<" ) "<<endl;
          break;
        }
        id=rand()%ib+1;
        if(bb[id])
        {
          j--;
          ie++;
          continue;
        }
        else bb[id]=true;
      }
      for(int j=0;j<ib;j++)if(bb[j])cout<<' '<<j+1;
      cout<<endl;
    }
  }
  //system("pause");
}
