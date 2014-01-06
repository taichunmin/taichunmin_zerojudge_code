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
      if(ta==0)break;//END 代表結束操作
      switch(ta)
      {
        case 1://ADD<空白>字串A  代表在訊息後連接(字串A)
          cin>>sb;
          sa+=sb;
          break;
        case 2://ADH<空白>字串B  代表在訊息前連接(字串B)
          cin>>sb;
          sa=sb+sa;
          break;
        case 3://ERA<空白>數字1<空白>數字2 代表刪去訊息從第(數字1)個字到第(數字2)個字，刪去後字串往前合併
          cin>>ia>>ib;
          for(int i=ia-1;i-ia+1+ib<sa.size();i++)sa[i]=sa[i-ia+1+ib];
          sa.resize(sa.size()-ib+ia-1);
          break;
        case 4://SUB<空白>數字3<空白>數字4 代表擷取訊息從第(數字3)個字到第(數字4)個字，只保留擷取後的訊息
          cin>>ia>>ib;
          for(int i=ia-1;i<ib;i++)sa[i-ia+1]=sa[i];
          sa.resize(ib-ia+1);
          break;
        case 5://SPA<空白>數字5  代表在第(數字5)個字的地方插入一個底線 _，訊息順往後推一個字
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
    ADD<空白>字串A
    代表在訊息後連接(字串A)

    ADH<空白>字串B
    代表在訊息前連接(字串B)

    ERA<空白>數字1<空白>數字2
    代表刪去訊息從第(數字1)個字到第(數字2)個字，刪去後字串往前合併

    SUB<空白>數字3<空白>數字4
    代表擷取訊息從第(數字3)個字到第(數字4)個字，只保留擷取後的訊息

    SPA<空白>數字5
    代表在第(數字5)個字的地方插入一個底線 _，訊息順往後推一個字

    END
    代表結束操作 
*/
