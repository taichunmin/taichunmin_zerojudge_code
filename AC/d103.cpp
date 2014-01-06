#include<iostream>
using namespace std;
int main()
{
  string sa;
  int na[10]={0,2,3,4,6,7,8,9,10,12};
  char ca[]={"0123456789X"};
  while(cin>>sa)
  {
    int ia=0;
    for(int i=0;i<9;i++)
      ia+=(sa[na[i]]-'0')*(i+1);
    ia%=11;
    if(sa[na[9]]==ca[ia])cout<<"Right"<<endl;
    else
    {
      sa[na[9]]=ca[ia];
      cout<<sa<<endl;
    }
  } 
  //system("pause");
}
