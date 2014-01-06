#include<iostream>
#include<sstream>
using namespace std;

int va[51],vb[51];

int main()
{
  istringstream fin;
  string sa;
  while(getline(cin,sa))
  {
    fin.clear();
    fin.str(sa);
    int ia=0;
    while(fin>>va[ia+1])ia++;//read
    if(ia==0)continue;//no data line
    else if(ia==1 && va[1]==-1)break;
    for(int i=1;i<=ia;i++)vb[i]=2147483647;
    
    //i   =0 1 2 3 4 5 6 7 8 9
    //va[]=? 2 3 6 4 0 2 2 1 0
    //vb[]=? 5 9 1 8 2 6 4 7 3
    for( int i=1,j=1,k=0 ; i<=ia ; i++,j=1,k=0 )
    {
      for(;j<=va[i]+1;j++)
        for(;vb[j+k]<i;k++);
      vb[j+k-1]=i;
    }
    for(int i=1;i<=ia;i++)
      cout<<vb[i]<<((i==ia)?('\n'):(' '));
  }
  //system("pause");
}
