#include<iostream>
#include<sstream>
using namespace std;

long long na[100][100];

int main()
{
    int ta;
    cin>>ta;
    istringstream ssin;
    string sa;
    for(int t1=0;t1<ta;t1++)
    {
      if(t1)cout<<endl;
      int ia,ib,ic,id;
      cin>>ia>>ib;cin.get();
      for(int i=0;i<ia;i++)
        for(int j=0;j<ib;j++)
          na[i][j]=0;
      na[0][0]=1;
      for(int i=0;i<ia;i++)
      {
        getline(cin,sa);
        ssin.str(sa);
        ssin.clear();
        ssin>>ic;
        while(ssin>>id)na[ic-1][id-1]=-1;
      }
      for(int i=0;i<ia;i++)
        for(int j=0;j<ib;j++)
          if(na[i][j]!=-1)
          {
            if(i>0 && na[i-1][j]!=-1)na[i][j]+=na[i-1][j];
            if(j>0 && na[i][j-1]!=-1)na[i][j]+=na[i][j-1];
          }
      if(na[ia-1][ib-1]!=-1)cout<<na[ia-1][ib-1]<<endl;
      else cout<<0<<endl;
    }
}
