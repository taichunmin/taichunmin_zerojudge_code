#include<iostream>
using namespace std;
int main()
{
  string sa,sb;
  int ia=0,ib=0;
  while(cin>>sa>>sb && (sa[1]!='a' || sb[1]!='v'))
  {
    switch(sa[1]-sb[1])
    {
      case 'c'-'t':
      case 't'-'a':
      case 'a'-'c':
        cout<<"�F�����"<<endl;
        ia++;
        break;
      case 't'-'c':
      case 'a'-'t':
      case 'c'-'a':
        cout<<"�����"<<endl;
        ib++;
        break;
    }
  }
  if(ia>ib)cout<<"�d�G���w���_���o��"<<endl;
  else cout<<"�ä����ܸ�"<<endl;
  //system("pause");
}
