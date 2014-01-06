#include<iostream>
using namespace std;

int a[]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
/*
A=10 台北市 J=18 新竹縣 S=26 高雄縣
B=11 台中市 K=19 苗栗縣 T=27 屏東縣
C=12 基隆市 L=20 台中縣 U=28 花蓮縣
D=13 台南市 M=21 南投縣 V=29 台東縣
E=14 高雄市 N=22 彰化縣 W=32 金門縣
F=15 台北縣 O=35 新竹市 X=30 澎湖縣
G=16 宜蘭縣 P=23 雲林縣 Y=31 陽明山
H=17 桃園縣 Q=24 嘉義縣 Z=33 連江縣
I=34 嘉義市 R=25 台南縣 
*/

int main()
{
  //freopen("","r",stdin);
  char in[11];
  while(cin.getline(in,11))
  {
    if(in[0]>='a' && in[0]<='z')
      in[0]-='a'-'A';//轉大寫 
    int data[11]={};
    data[0]=a[in[0]-'A']/10;
    data[1]=a[in[0]-'A']%10;
    for(int i=2;i<11;i++)
      data[i]=in[i-1]-'0';
    int total=data[0];
    for(int i=1;i<10;i++)
      total+=data[i]*(10-i);
    if((10-(total%10))%10==data[10])
      cout<<"real"<<endl;
    else cout<<"fake"<<endl;
  }
} 
