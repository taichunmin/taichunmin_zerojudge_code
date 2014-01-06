//d075
#include<iostream>
#include<cstdlib>
using namespace std;

int va[100001];
int comp(const void* a,const void* b)
{
  return *(int*)b-*(int*)a;
}

int main()
{
  int ia=0;
  while(cin>>va[ia])ia++;
  qsort(va,ia,sizeof(int),comp);
  for(int i=0;i<ia;i++)
  {
    if(i)cout<<' ';
    cout<<va[i];
  }
  //system("pause");
}
