#include<cstring>
#include<cstdio>
using namespace std;

char ca[1000002];
int ASCII[128];

int main()
{
    while(gets(ca) && strcmp(ca,"STOP!!")!=0)
    {
        memset(ASCII,0,sizeof(ASCII));
        for(int i=0;ca[i]!=0;i++)ASCII[ca[i]]++;
        gets(ca);
        for(int i=0;ca[i]!=0;i++)ASCII[ca[i]]--;
        bool ba=true;
        for(int i=33;i<127 && ba;i++)
            if(ASCII[i])
            {
                puts("no");
                ba=false;
            }
        if(ba)puts("yes");
    }
    //system("pause");
}
