#include<iostream>
using namespace std;

int main()
{
    int ta;
    cin>>ta;
    string sa[500];
    int ia,ib;
    while(ta--)
    {
        cin>>ia>>ib;
        cin.get();
        for(int i=0;i<ia;i++) getline(cin,sa[i]);
        int sum=0;
        for(int i=0;i<ia;i++)
            if(sa[i][0]=='1')sum++;
        for(int i=0;i<ib;i++)
            if(sa[0][i]=='1')sum++;
        for(int i=0;i<ia;i++)
            for(int j=0;j<ib;j++)
            {
                if((j==ib-1)?(sa[i][j]=='1'):(sa[i][j]!=sa[i][j+1]))
                    sum++;
                if((i==ia-1)?(sa[i][j]=='1'):(sa[i][j]!=sa[i+1][j]))
                    sum++;
            }
        cout<<sum<<endl;
    }
    //system("pause");
}
