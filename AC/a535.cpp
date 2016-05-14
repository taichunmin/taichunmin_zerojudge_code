#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,p,count=0;
    char garbage[100];
    bool first=true;
    while(cin>>n>>p)
    {
      cin.get();
      if(n==0 || p==0)break;
      if(!first)cout<<endl;
      else first=!first;
      for(int i=0;i<n;i++)cin.getline(garbage,100);
      
      string *aa;
      double *bb;
      int *cc;
      aa=new string[p];
      bb=new double[p];
      cc=new int[p];
      
      for(int i=0;i<p;i++)
      {
        getline(cin,aa[i]);
        cin>>bb[i]>>cc[i];
        cin.get();
        for(int j=0;j<cc[i];j++)cin.getline(garbage,100);
      }
      
      int s=0;
      for(int i=1;i<p;i++)
        if(cc[s]<cc[i])s=i;
      
      for(int i=0;i<p;i++)
        if(cc[i]==cc[s] && bb[i]<bb[s])
          s=i;
      cout<<"RFP #"<<++count<<endl<<aa[s]<<endl;
      delete [] aa;
      delete [] bb;
      delete [] cc;
    }
}
