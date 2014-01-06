#include<iostream>
using namespace std;

long long aoa[3][100][100];

int main()
{
    int ia,ib,ic,id;
    while(cin>>ia>>ib>>ic>>id)
    {
        if(ib!=ic)
        {
            cout<<"Error"<<endl;
            continue;
        }
        for(int i=0;i<ia;i++)
            for(int j=0;j<ib;j++)
                cin>>aoa[0][i][j];
        for(int i=0;i<ic;i++)
            for(int j=0;j<id;j++)
                cin>>aoa[1][i][j];
        for(int i=0;i<ia;i++)
            for(int j=0;j<id;j++)
            {
                aoa[2][i][j]=0;
                for(int k=0;k<ib;k++)aoa[2][i][j]+=aoa[0][i][k]*aoa[1][k][j];
            }
        for(int i=0;i<ia;i++)
            for(int j=0;j<id;j++)
                cout<<aoa[2][i][j]<<((j==id-1)?'\n':' ');
    }
    //system("pause");
}
