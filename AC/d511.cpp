#include<iostream>
using namespace std;
int main()
{
  int va[3],ia=0;
  for(int ti=0;ti<5;ti++)
  {
    for(int i=0;i<3;i++)cin>>va[i];
    for(int i=0;i<3;i++)
      for(int j=i+1;j<3;j++)
        if(va[i]>va[j])va[i]^=va[j]^=va[i]^=va[j];
    if(va[0]+va[1]>va[2] && va[1]-va[0]<va[2])ia++;
  }
  cout<<ia<<endl;
  //system("pause");
}
