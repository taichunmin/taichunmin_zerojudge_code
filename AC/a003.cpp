#include<iostream>
using namespace std;

int main()
{
  char ca[][5]={"���q","�N","�j�N"};
  int ia,ib;
  while(cin>>ia>>ib)cout<<ca[(ia*2+ib)%3]<<endl;
}

/*

#include<iostream>
using namespace std;

int main()
{
  char ca[][5]={"���q","�N","�j�N"};
  int ia,ib;
  while(cin>>ia>>ib)cout<<ca[(ia*2+ib)%3]<<endl;
}

�sĶ���~�A ���ˬd�y�k�O�_�ŦX�t��(ANSI/ISO C/C++ by GNU)���n�D�C
���~�T���G
/tmp/code_29317.cpp: In function `int main()':
/tmp/code_29317.cpp:6: error: initializer-string for array of chars is too long
/tmp/code_29317.cpp:6: error: initializer-string for array of chars is too long
*/
