#include<iostream>
using namespace std;

int main()
{
    int t,t1=0;
    while(cin>>t)
    {
      if(t==0)break;
      t1++;
      cout<<"Game "<<t1<<':'<<endl;
      int *Ans,*user,A=0,B=0;
      Ans=new int[t];
      for(int i=0;i<t;i++)cin>>Ans[i];
      user=new int[t];
      while(cin>>user[0])
      {
        for(int i=1;i<t;i++)cin>>user[i];
        bool stop=true;
        for(int i=0;i<t;i++)
          if(user[i]!=0)
          {
            stop=false;
            break;
          }
        if(stop)break;
        bool *ischeA;
        ischeA=new bool[t];
        bool *ischeB;
        ischeB=new bool[t];
        bool *ische[2];
        ische[0]=ischeA;
        ische[1]=ischeB;
        for(int r=0;r<t;r++)
        {
          ische[0][r]=0;
          ische[1][r]=0;
        }
        for(int r=0;r<t;r++)
          if(Ans[r]==user[r])
          {
            A++;
            ische[0][r]=1;
            ische[1][r]=1;
          }
        for(int r=0;r<t;r++)
          for(int s=0;s<t;s++)
          {
            if(ische[1][r])break;
            if(r==s || ische[0][s])continue;
            if(user[r]==Ans[s])
            {
              B++;
              ische[0][s]=1;
              ische[1][r]=1;
            }
          }       
        cout<<"    ("<<A<<','<<B<<")\n";
        A=B=0;
      }
    }
}
