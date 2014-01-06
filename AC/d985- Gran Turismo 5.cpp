#include<iostream>
using namespace std;

int main()
{
    int ta;
    cin>>ta;
    for(int t1=0;t1<ta;t1++)
    {
        if(t1)cout<<endl;
        int ia,imin=2147483647,iaver=0,ib,ic;
        cin>>ia;
        for(int i=0;i<ia;i++)
        {
            cin>>ib>>ic;
            ib=ib*60+ic;
            if(ib<imin)imin=ib;
            iaver+=ib;
        }
        iaver/=ia;
        cout<<"Track "<<t1+1<<":"<<endl;
        cout<<"Best Lap: "<<imin/60<<" minute(s) "<<imin%60<<" second(s)."<<endl;
        cout<<"Average: "<<iaver/60<<" minute(s) "<<iaver%60<<" second(s)."<<endl;
    }
    //system("pause");
}
