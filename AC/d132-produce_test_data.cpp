#include<iostream>
using namespace std;
int main()
{
  srand(time(NULL));
  freopen("d132-in.txt","w",stdout);
  for(int ta=0;ta<200;ta++)
  {
    int ia,ib;
    if(ta<3)ia=1000;
    else ia=rand()%20+1;
    cout<<ia<<endl;
    ib=rand()%15+1;//deside guess times
    //cout the ans and guess
    for(int i=0;i<ib+1;i++)
      for(int j=0;j<ia;j++)
      {
        cout<<rand()%9+1;
        if(j<ia-1)cout<<' ';
        else cout<<endl;
      }
    for(int i=0;i<ia;i++)
    {
      if(i)cout<<' ';
      cout<<0;
    }
    cout<<endl;
  }
  cout<<0<<endl;
  //³´¨À 
  cout<<2<<endl;
  cout<<"2 5"<<endl;
  cout<<"5 6"<<endl;
  //system("pause");
}
