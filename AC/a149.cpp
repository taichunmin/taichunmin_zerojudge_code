#include<iostream>
using namespace std;

/*
int main()
{
    string sa;
    long long la;
    int T;
    cin>>T;
    cin.get();
    while(T--)
    {
        getline(cin,sa);
        la=1;
        for(int i=0;i<sa.size();i++)
            la*=(sa[i]-'0');
        cout<<la<<endl;
    }
}
*/
int main()
{
    long long la,lb;
    int T;
    cin>>T;
    while(T--)
    {
        cin>>la;
        lb=(la!=0);
        while(la>0)
        {
            lb*=la%10;
            la/=10;
        }
        cout<<lb<<endl;
    }
}
