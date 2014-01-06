#include<iostream>
using namespace std;

int main()
{
  int ia,ib,ic,id;
  while(cin>>ia>>ib>>ic>>id,ia+ib+ic+id)
  {
    cout<<(ic*60+id-ia*60-ib+1440)%1440<<endl;
  }
  //system("pause");
}
