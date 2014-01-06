#include<iostream>
using namespace std;

int main()
{
  int ta;
  cin>>ta;
  for(int t1=0;t1<ta;t1++)
  {
    double v[6],ans;
    for(int i=0;i<6;i++)cin>>v[i];
    ans=v[0]*v[3]-v[1]*v[2]+v[2]*v[5]-v[3]*v[4]+v[4]*v[1]-v[5]*v[0];
    if(ans<0)ans=-ans;
    ans/=2*7;
    printf("%.0lf\n",ans);
  }
  //system("pause");
}
