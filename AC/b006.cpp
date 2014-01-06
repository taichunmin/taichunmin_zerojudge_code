#include<iostream>
using namespace std;

int main()
{
  //freopen("testdata\\pro4.in","r",stdin);
  //freopen("pro4-1.out","w",stdout);
  int ta,tb;//ta紀錄ia個數 tb為最長長度 
  int ia[5000][3];
  //  ia[][0]寬 ia[][1]長 ia[][2]長度 
  while(cin>>ta)
  {
    tb=0;
    for(int i=0;i<ta;i++)
    {
      cin>>ia[i][0]>>ia[i][1];
      if(ia[i][0]>ia[i][1])ia[i][0]^=ia[i][1]^=ia[i][0]^=ia[i][1];
    }
    for(int i=0;i<ta;i++)
      for(int j=i+1;j<ta;j++)
        if(ia[i][0]+ia[i][1]>ia[j][0]+ia[j][1])
        {
          ia[i][0]^=ia[j][0]^=ia[i][0]^=ia[j][0];
          ia[i][1]^=ia[j][1]^=ia[i][1]^=ia[j][1];
        }
    // LIS 最長遞增序列 （這一題不能用簡化作法）
    for(int i=0;i<ta;i++)ia[i][2]=1;
    tb=1;
    for(int i=1;i<ta;i++)
      for(int j=tb;j>0;j--)
        for(int k=i-1;k>-1;k--)
          if(ia[k][2]==j && ia[i][0]>=ia[k][0] && ia[i][1]>=ia[k][1])
          {
            ia[i][2]=j+1;
            if(ia[i][2]>tb)tb=ia[i][2];
            j=-1;
            k=-2;
          }
    cout<<tb<<endl;
  }
  //system("pause");
}
