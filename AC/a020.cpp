#include<iostream>
using namespace std;

int a[]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
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
  //freopen("","r",stdin);
  char in[11];
  while(cin.getline(in,11))
  {
    if(in[0]>='a' && in[0]<='z')
      in[0]-='a'-'A';//��j�g 
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
