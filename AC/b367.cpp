#include<iostream>
using namespace std;

int ma[11][11], ia, ib;

int fa()
{
    int fia = (ia>>1);
    for(int i=0; i<fia; i++)
        for(int j=0; j<ib; j++)
            if(ma[i][j] != ma[ia-i-1][ib-j-1])
                return 1;
    if(ia&1)
        for(int j=0; j<ib/2; j++)
            if(ma[fia][j] != ma[fia][ib-j-1])
                return 2;
    return 0;
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        cin>>ia>>ib;
        for(int i=0;i<ia;i++)
            for(int j=0;j<ib;j++)
                cin>>ma[i][j];
        cout<<(fa()?"keep defending":"go forward")<<endl;
    }
}
