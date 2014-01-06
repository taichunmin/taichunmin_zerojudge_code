#include<iostream>
using namespace std;

int main()
{
  int ia,ib,ic,id,t1=0;
  while(cin>>ia>>ib>>ic>>id,ia+ib+ic+id)
  {
    int va[10000]={},ta=1;
    ia%=ic;
    ib%=ic;
    while(va[id]==0)
    {
      va[id]=ta;
      ta++;
      id=(id*ia+ib)%ic;
    }
    cout<<"Case "<<(++t1)<<": "<<ta-va[id]<<endl;
  }
}
