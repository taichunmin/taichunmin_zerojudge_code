#include<iostream>
using namespace std;

int main()
{
    int ta;
    int la,lb;
    cin>>ta;
    string sa,sb;
    for(int ti=0;ti<ta;ti++)
    {
        cout<<"DATA SET #"<<ti+1<<':'<<endl;
        cin>>sa;
        la=sa.length();
        int tb;
        cin>>tb;
        for(int tj=0;tj<tb;tj++)
        {
            cin>>sb;
            lb=sb.length();
            bool ba=true;
            if(la>lb+1)ba=false;
            for(int i=0;ba && i<la && sa[i]!='#';i++)
                if(sa[i]!=sb[i])ba=false;
            for(int i=0;ba && la-i>-1 && sa[la-i]!='#';i++)
                if(sa[la-i]!=sb[lb-i])ba=false;
            if(ba)cout<<"POSSIBLE"<<endl;
            else cout<<"IMPOSSIBLE"<<endl;
        }
    }
}
        
