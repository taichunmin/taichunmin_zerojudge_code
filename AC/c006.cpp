#include<iostream>
using namespace std;

int f(int ia,int ib)//��������V (���D�ظ��X��׼W�[��V���f����)
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
