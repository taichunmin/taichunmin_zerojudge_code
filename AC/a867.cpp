#include <iostream>
#include <string>
using namespace std;

string sa[15];

void fn1(int i, int j)
{
    if(i<0 || j<0 || i>14 || j>29 || sa[i][j] == '*')
        return;
    if(sa[i][j] == '.')
        sa[i][j] = '1';
    else sa[i][j]++;
}

int main()
{
    int ia[][2] = {
        1, 1,
        1, 0,
        1, -1,
        0, 1,
        0, -1,
        -1, 1,
        -1, 0,
        -1, -1,
    };
    while(getline(cin, sa[0]))
    {
        for(int i=1;i<15;i++)
            getline(cin, sa[i]);
        for(int i=0;i<15;i++)
            for(int j=0;j<30;j++)
                if(sa[i][j] == '*')
                    for(int k=0; k<8; k++)
                        fn1(i+ia[k][0], j+ia[k][1]);
        for(int i=0;i<15;i++)
            cout<<sa[i]<<endl;
    }
}
