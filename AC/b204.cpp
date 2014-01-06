#include<iostream>
using namespace std;

int main()
{
    int ta;cin>>ta;
    string sa,sb;
    int la,lb,va,vb,w;
    for(int t1=0;t1<ta;t1++)
    {
        cin>>sa>>sb;
        la=sa.length();
        lb=sb.length();
        va=vb=w=0;
        for(int i=0;i<la;i++)
            if(sa[i]=='O')va++;
        for(int i=0;i<lb;i++)
            if(sb[i]=='O')vb++;
        if(la>4)
        {
            if(la==lb && va>vb)w=1;
            else if(la!=lb && va>vb+1)w=1;
            if(va<vb)w=2;
        }
        else
        {
            if(va>vb+5-lb)w=1;
            if(vb>va+5-la)w=2;
        }
        switch(w)
        {
        case 0:
            cout<<"NO"<<endl;
            break;
        case 1:
            cout<<"A"<<endl;
            break;
        case 2:
            cout<<"B"<<endl;
            break;
        }
    }
}
        
