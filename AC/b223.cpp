#include<iostream>
using namespace std;

int dect(string sb)
{
  if(sb=="ADD")return 1;
  if(sb=="ADH")return 2;
  if(sb=="ERA")return 3;
  if(sb=="SUB")return 4;
  if(sb=="SPA")return 5;
  if(sb=="END")return 0;
}

int main()
{
  string sa,sb;
  while(cin>>sa)
  {
    int ia,ib;
    while(cin>>sb)
    {
      int ta=dect(sb);
      if(ta==0)break;//END �N�����ާ@
      switch(ta)
      {
        case 1://ADD<�ť�>�r��A  �N��b�T����s��(�r��A)
          cin>>sb;
          sa+=sb;
          break;
        case 2://ADH<�ť�>�r��B  �N��b�T���e�s��(�r��B)
          cin>>sb;
          sa=sb+sa;
          break;
        case 3://ERA<�ť�>�Ʀr1<�ť�>�Ʀr2 �N��R�h�T���q��(�Ʀr1)�Ӧr���(�Ʀr2)�Ӧr�A�R�h��r�꩹�e�X��
          cin>>ia>>ib;
          for(int i=ia-1;i-ia+1+ib<sa.size();i++)sa[i]=sa[i-ia+1+ib];
          sa.resize(sa.size()-ib+ia-1);
          break;
        case 4://SUB<�ť�>�Ʀr3<�ť�>�Ʀr4 �N���^���T���q��(�Ʀr3)�Ӧr���(�Ʀr4)�Ӧr�A�u�O�d�^���᪺�T��
          cin>>ia>>ib;
          for(int i=ia-1;i<ib;i++)sa[i-ia+1]=sa[i];
          sa.resize(ib-ia+1);
          break;
        case 5://SPA<�ť�>�Ʀr5  �N��b��(�Ʀr5)�Ӧr���a�贡�J�@�ө��u _�A�T����������@�Ӧr
          sa.resize(sa.size()+1);
          cin>>ia;
          for(int i=sa.size();i>ia-2;i--)sa[i]=sa[i-1];
          sa[ia-1]='_';
          break;
      }
      cout<<sa<<endl;
    }
  }
  system("pause");
}

/*
    ADD<�ť�>�r��A
    �N��b�T����s��(�r��A)

    ADH<�ť�>�r��B
    �N��b�T���e�s��(�r��B)

    ERA<�ť�>�Ʀr1<�ť�>�Ʀr2
    �N��R�h�T���q��(�Ʀr1)�Ӧr���(�Ʀr2)�Ӧr�A�R�h��r�꩹�e�X��

    SUB<�ť�>�Ʀr3<�ť�>�Ʀr4
    �N���^���T���q��(�Ʀr3)�Ӧr���(�Ʀr4)�Ӧr�A�u�O�d�^���᪺�T��

    SPA<�ť�>�Ʀr5
    �N��b��(�Ʀr5)�Ӧr���a�贡�J�@�ө��u _�A�T����������@�Ӧr

    END
    �N�����ާ@ 
*/
