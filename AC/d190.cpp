#include<iostream>
#include<cstdlib>
using namespace std;

short int na[2000000];

int comp(const void* a,const void* b)
{
  return (int)(*(short int*)a-*(short int*)b);
}

int main()
{
    int ia;
    while(cin>>ia,ia)
    {
      for(int i=0;i<ia;i++)cin>>na[i];
      qsort(na,ia,sizeof(short int),comp);
      for(int i=0;i<ia;i++)
      {
        if(i)cout<<' ';
        cout<<na[i];
      }
      cout<<endl;
    }
    //system("pause");
}
