#include<iostream>
using namespace std;

int aia[]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
/*
A=10 �x�_�� J=18 �s�˿� S=26 ������
B=11 �x���� K=19 �]�߿� T=27 �̪F��
C=12 �򶩥� L=20 �x���� U=28 �Ὤ��
D=13 �x�n�� M=21 �n�뿤 V=29 �x�F��
E=14 ������ N=22 ���ƿ� W=32 ������
F=15 �x�_�� O=35 �s�˥� X=30 ���
G=16 �y���� P=23 ���L�� Y=31 �����s
H=17 ��鿤 Q=24 �Ÿq�� Z=33 �s����
I=34 �Ÿq�� R=25 �x�n�� 
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
