#include<iostream>
using namespace std;

int main()
{
  char ca[][5]={"普通","吉","大吉"};
  int ia,ib;
  while(cin>>ia>>ib)cout<<ca[(ia*2+ib)%3]<<endl;
}

/*

#include<iostream>
using namespace std;

int main()
{
  char ca[][5]={"普通","吉","大吉"};
  int ia,ib;
  while(cin>>ia>>ib)cout<<ca[(ia*2+ib)%3]<<endl;
}

編譯錯誤， 請檢查語法是否符合系統(ANSI/ISO C/C++ by GNU)的要求。
錯誤訊息：
/tmp/code_29317.cpp: In function `int main()':
/tmp/code_29317.cpp:6: error: initializer-string for array of chars is too long
/tmp/code_29317.cpp:6: error: initializer-string for array of chars is too long
*/
