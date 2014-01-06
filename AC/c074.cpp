#include<iostream>
using namespace std;
int main()
{
    int n,i,a[13];
    bool ba=false;
    while(cin>>n)
    {
        if(n==0)    break;
        int ans[6];
        for(i=0;i<n;i++)
            cin>>a[i];
        if(ba)cout<<endl;
        else ba=true;
        for(i=0;i<n&&n-i>=6;i++)
            for(int j=i+1;j<n&&n-j>=5;j++)
                for(int k=j+1;k<n&&n-k>=4;k++)
                    for(int l=k+1;l<n&&n-l>=3;l++)
                        for(int m=l+1;m<n&&n-m>=2;m++)
                            for(int o=m+1;o<n&&n-o>=1;o++)
                            {
                                ans[0]=a[i];
                                ans[1]=a[j];
                                ans[2]=a[k];
                                ans[3]=a[l];
                                ans[4]=a[m];
                                ans[5]=a[o];
                                for(int p=0;p<5;p++)
                                    cout<<ans[p]<<" ";
                                cout<<ans[5]<<endl;
                            }
    }
    return 0;
}
