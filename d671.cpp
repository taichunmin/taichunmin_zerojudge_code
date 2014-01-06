#include<iostream>
using namespace std;

int main()
{
    int square[101];
    for(int i=0;i<101;i++)
        square[i] = i*i;
    int T;
    cin>>T; cin.get();
    string sa;
    while( T-- )
    {
        getline(cin,sa);
        int ia = -1;
        for(int i=0;i<101;i++)
            if( sa.size() == square[i] )
                ia = i;
        if(ia==-1)
            cout<<"INVALID"<<endl;
        else
        {
            for(int i=0;i<ia;i++)
                for(int j=0;j<ia;j++)
                    cout<<sa[j*ia+i];
            cout<<endl;
        }
    }
}
