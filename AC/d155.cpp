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
        cout<<"ÆF¹ÚÀò³Ó"<<endl;
        ia++;
        break;
      case 't'-'c':
      case 'a'-'t':
      case 'c'-'a':
        cout<<"µµÀò³Ó"<<endl;
        ib++;
        break;
    }
  }
  if(ia>ib)cout<<"´dºGªºÄw±¹°_­»ªo¿ú"<<endl;
  else cout<<"¿Ã¤õªºÂÜ¸ñ"<<endl;
  //system("pause");
}
