#include<iostream>
using namespace std;

int map[202][202];
int ia,ib;
struct ta_t
{
  bool ba[202];
  int len,va[202];
};
int fa(ta_t ta,int fia)

int main()
{
  int ic,id,ie,ig;
  while(cin>>ia)
  {
    memset(map,0,sizeof(map));
    for(int i=1;i<=ia;i++)
    {
      cin>>ig;
      map[i][ia+i]=ig;
    }
    cin>>ib;
    for(int i=0;i<ib;i++)
    {
      cin>>ie>>ig>>id;
      map[ie+ia][ig]=id;
    }
    cin>>ic>>id;
    for(int i=0;i<ic;i++)
    {
      cin>>ie;
      map[0][ie]=2147483647;
    }
    for(int i=0;i<id;i++)
    {
      cin>>ie;
      map[ie][2*ia+1]=2147483647;
    }
    ia=2*ia+1;
  system("pause");
}
