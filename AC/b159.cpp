#include<iostream>
#include<cstdlib>
using namespace std;

int compare(const void* a,const void* b)
{
  return *(int*)a-*(int*)b;//¤p¨ì¤j 
}

int main()
{
  int ia[30000],ib,ic,id;
  while(cin>>ib>>ic)
  {
    for(int i=0;i<ic;i++)cin>>ia[i];
    qsort(ia,ic,sizeof(int),compare);
    //for(int i=0;i<ic;i++)cout<<ia[i]<<' ';
    id=0;
    for(int j=ic-1;id<ic && id<j;j--)
      if(ia[id]+ia[j]<=ib)id++;
    cout<<ic-id<<endl;
  }
}
