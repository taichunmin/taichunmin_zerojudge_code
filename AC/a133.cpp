#include<iostream>
using namespace std;

int main()
{
    int va,vb;
    int vc[101],vd[101];//¨â¶ðªº¼Æ¦r
    int ve[101][101];
    int ta=0;
    while(cin>>va>>vb,va+vb)
    {
      for(int i=0;i<va;i++)cin>>vc[i];
      for(int i=0;i<vb;i++)cin>>vd[i];
      for(int i=0;i<=va;i++)ve[i][0]=0;
      for(int i=0;i<=vb;i++)ve[0][i]=0;
      for(int i=1;i<=va;i++)
        for(int j=1;j<=vb;j++)
        {
          if(vc[i-1]==vd[j-1])ve[i][j]=ve[i-1][j-1]+1;
          else
          {
            if(ve[i-1][j]>ve[i][j-1])ve[i][j]=ve[i-1][j];
            else ve[i][j]=ve[i][j-1];
          }
        }
      /*
      cout<<endl<<"      ";
      for(int i=0;i<vb;i++)cout.width(3),cout<<vd[i];
      cout<<endl;
      for(int i=0;i<=va;i++)
      {
        if(i>0)cout.width(3),cout<<vc[i-1];
        else cout<<"   ";
        for(int j=0;j<=vb;j++)
          cout.width(3),cout<<ve[i][j];
        cout<<endl;
      }
      cout<<endl;
      */
      cout<<"Twin Towers #"<<++ta<<endl;
      cout<<"Number of Tiles : "<<ve[va][vb]<<endl<<endl;
    }
}
/*
7 6
20 15 10 15 25 20 15
15 25 10 20 15 20

      20 15 10 15 25 20 15
    0  0  0  0  0  0  0  0
15  0  0  1  1  1  1  1  1
25  0  0  1  1  1  2  2  2
10  0  0  1  2  2  2  2  2
20  0  1  1  2  2  2  3  3
15  0  1  2  2  3  3  3  4
20  0  1  2  2  3  3  4  4

     0  0  0  0  0  0  0
     0  0  0  0  1  1  1
     0  0  1  1  1  1  1
     0  0  1  1  2  2  2
     0  1  1  1  2  2  2
     0  1  1  2  2  3  3
     0  1  1  2  3  3  3
     0  1  1  2  3  3  3
*/
