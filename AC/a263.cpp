#include <iostream>
using namespace std;

int daysOfMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int isLeep(int y)
{
    return (y%4==0 && y%100 || y%400==0);
}

int fn1(int y, int m, int d)
{
    for(int i=0; i<y; i++)
        d += 365 + isLeep(i);
    for(int i=1; i<m; i++)
        d += daysOfMonth[i] + (i==2 ? isLeep(y) : 0);
    return d;
}

int main()
{
    int y, m, d;
    while(cin>>y>>m>>d)
    {
        int ans = fn1(y, m, d);
        cin>>y>>m>>d;
        ans -= fn1(y, m, d);
        if(ans < 0)
            ans = -ans;
        cout<<ans<<endl;
    }
}
