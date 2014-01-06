#include<iostream>
using namespace std;

bool fa(string &sa)
{
    for(int i=0;i<sa.size()/2;i++)
        if(sa[i]!=sa[sa.size()-1-i])return false;
    return true;
}

int main()
{
    int ta;
    cin>>ta;
    cin.get();
    string sa;
    while(ta--)
    {
        getline(cin,sa);
        if(fa(sa))cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    //system("pause");
}
