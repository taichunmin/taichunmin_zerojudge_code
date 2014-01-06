//d093 ACM477
#include<iostream>
using namespace std;

struct ta_t{
  bool is_c;
  double p[4];
}ta[10];
int ia=0,ib=1;

int main()
{
  char ca;
  double da,db;
  while(cin>>ca,ca!='*')
  {
    ta[ia].is_c=(ca=='c');
    for(int i=0;i<4-(ta[ia].is_c);i++)cin>>ta[ia].p[i];
    ia++;
  }
  while(cin>>da>>db,(da!=9999.9 && db!=9999.9))
  {
    bool bb=true;
    for(int i=0;i<ia;i++)
    {
      if(ta[i].is_c && (ta[i].p[0]-da)*(ta[i].p[0]-da)+(ta[i].p[1]-db)*(ta[i].p[1]-db)<=ta[i].p[2]*ta[i].p[2])
      {
        cout<<"Point "<<ib<<" is contained in figure "<<i+1<<endl;
        bb=false;
      }
      else if(!ta[i].is_c && ta[i].p[0]<=da && da<=ta[i].p[2] && ta[i].p[3]<=db && db<=ta[i].p[1])
      {
        cout<<"Point "<<ib<<" is contained in figure "<<i+1<<endl;
        bb=false;
      }
    }
    if(bb)cout<<"Point "<<ib<<" is not contained in any figure"<<endl;
    ib++;
  }
  //system("pause");
}
