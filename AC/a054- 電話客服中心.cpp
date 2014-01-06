#include<iostream>
using namespace std;

int aia[]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
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
    for(int i=0;i<26;i++)
        aia[i]=aia[i]/10+(aia[i]%10)*9;
    string sa;
    while(cin>>sa)
    {
        int sum=0;
        for(int i=0;i<8;i++)
            sum+=(sa[i]-'0')*(8-i);
        sum+=sa[8]-'0';
        for(int i=0;i<26;i++)
            if((sum+aia[i])%10==0)cout<<(char)('A'+i);
        cout<<endl;
    }
    //system("pause");
}
