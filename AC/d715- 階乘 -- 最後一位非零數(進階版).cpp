#include<iostream>
using namespace std;

int vb[10][4]={4,8,2,6,
               2,4,6,8, //1
               4,8,2,6, //2
               6,2,8,4, //3
               8,6,4,2, //4
               6,2,8,4, //5
               2,4,6,8, //6
               4,8,2,6, //7
               6,2,8,4, //8
               8,6,4,2};//9
inline int fa(int fia,int fib)
{
    return (fia/10+(fia%10>=fib))%4;
}
inline int fb(int fia)
{
    return (fia>>1)-1;
}
int fc(int ia)
{
    int ans=6;
    for(int i=1;i<10;i++)
    {
        if(i==5)continue;
        int ib=fa(ia,i);
        while(ib--) ans=vb[i][ fb(ans) ];
    }
    return ans;
}

int main()
{
    int ia;
    while(cin>>ia)
    {
        if(ia<2)
        {
            cout<<1<<endl;
            continue;
        }
        int ans=6;
        int ib=ia,ic=0;
        while(ib>0)ic+=(ib/=5);
        ic%=4;
        while(ic--)ans=vb[5][fb(ans)];
        while(ia>0)
        {
            ans=vb[fc(ia)][fb(ans)];
            ia/=5;
        }
        cout<<ans<<endl;
    }
    //system("pause");
}
