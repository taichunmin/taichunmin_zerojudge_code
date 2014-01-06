#include<iostream>
using namespace std;

int f(int ia,int ib)//順時鐘轉向 (此題目號碼刻度增加轉向為逆時鐘)
{
  if(ia>ib)ib+=40;
  return ib-ia;
}

int main()
{
  int ia,ib,ic,id;
  while(cin>>ia>>ib>>ic>>id,ia+ib+ic+id)
  {
    int total=120;
    total+=f(ib,ia);
    total+=f(ib,ic);
    total+=f(id,ic);
    cout<<total*9<<endl;
  }
}
