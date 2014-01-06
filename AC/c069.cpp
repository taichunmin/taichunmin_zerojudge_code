#include<iostream>
using namespace std;

inline bool fa(int a,int b)
{
  return (a%4==0 && (a%100!=0 || !b) || a%400==0);
}
inline bool check(int y,int m,int d,int ib)
{
  int va[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
  //            1  2  3  4  5  6  7  8  9  10 11 12
  if(m!=2 && d>va[m] || m==2 && d>(va[m]+fa(y,ib)) || m<1 || d<1 || y<1 || m>12)return true;
  return false;
}

int main()
{
  int month[13]={0,3,0,3,2,3,2,3,3,2,3 ,2 ,3};
  char *day_s[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
  char *month_s[13]={"","January","February","March","April","May","June","July","August","September","October","November","December"};
  //               1 2 3 4 5 6 7 8 9 10 11 12
  int y,m,d;
  while(cin>>m>>d>>y,y+m+d)
  {
    int ia=5,ib=0;
    if(y>1752 || y==1752 && ( m>9 || m==9 && d>13 ))
    {
      ia=0;
      ib=1;
    }
    if((y==1752 && m==9 && 2<d && d<14) || check(y,m,d,ib))
    {
      cout<<m<<"/"<<d<<"/"<<y<<" is an invalid date."<<endl;
      continue;
    }
    for(int i=1;i<y;i++)//year
      ia+=1+fa(i,ib);
    for(int i=1;i<m;i++)
      ia+=month[i];
    if(m>2)ia+=fa(y,ib);
    printf("%s %d, %d is a %s\n",month_s[m],d,y,day_s[(ia+d)%7]);
  }
}
