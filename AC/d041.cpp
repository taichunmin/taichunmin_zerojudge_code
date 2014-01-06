#include<iostream>
using namespace std;

int main()
{
  //freopen("","r",stdin);
  //freopen("","w",stdout);
  int ta,tb=0,ia;
  cin>>ta;
  char ca;
  int na[6];
  while( cin>>na[0]>>ca>>na[1]>>ca>>na[2] >> na[3]>>ca>>na[4]>>ca>>na[5] )
  {
    ia=0;
    if(ia==0 && (na[2]>na[5] || (na[2]==na[5] && na[1]*100+na[0]>=na[4]*100+na[3])))ia++;
    if(ia==1 && (na[2]-na[5]-(na[1]*100+na[0]<na[4]*100+na[3]))<=130)ia++;
    
    cout<<"Case #"<<++tb<<": ";
    if(ia==0)cout<<"Invalid birth date"<<endl;
    else if(ia==1)cout<<"Check birth date"<<endl;
    else cout<<na[2]-na[5]-(na[1]*100+na[0]<na[4]*100+na[3])<<endl;
  }
  //system("pause");
}
