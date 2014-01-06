#include<iostream>
using namespace std;

int main()
{
    int aa[]={2,3,5,7,11,13,17,19,23,29,31,37,41,
              43,47,53,59,61,67,71,73,79,83,89,97,101};
    int a;
    while(cin>>a)
    {
      if(a==0)break;
      int t;
      for(int i=0;i<27;i++)
        if(a<aa[i])
        {
          t=i;
          break;
        }
      int *bb;
      bb=new int[++t];
      for(int i=0;i<t;i++)bb[i]=0;
      for(int i=0;i<t;i++)
      {
        int z=a,b=aa[i];
        while(z>=b)
        {
          z/=b;
          bb[i]+=z;
        }
      }
      cout.width(3);
      cout<<a<<"! =";
      for(int i=0;i<t-1;i++)
      {
        if(i==15)cout<<"\n      ";
        cout.width(3);
        cout<<bb[i];
      }
      if(a==1)
      {
        cout.width(3);
        cout<<(int)0;
      }
      cout<<endl;
    }       
}
