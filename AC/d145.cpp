#include<iostream>
using namespace std;

int main()
{
  string sa;
  while(getline(cin,sa))
  {
    int ia=0,ib=1;
    for(int i=0;i+ib<sa.size();i++)
      if(sa[i]==sa[i+ib])
      {
        ia=i;
        ib++;
        i--;
      }
    for(int i=0;i<ib;i++)
    {
      if(i)cout<<'-';
      cout<<sa[ia];
    }
    cout<<endl;
  }
  //system("pause");
}
