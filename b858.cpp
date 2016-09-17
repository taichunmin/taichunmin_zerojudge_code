#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

#define oo 2147483647

struct State{
//    char u[100];
    unsigned w[2];
    unsigned a;
};

int nums[100] = {}, len = 0;
State bestAns, tmp;

void dp(int pos, int index = 0)
{
    if(index==len) {
        // compare best answer
        if(bestAns.a > tmp.a)
            bestAns = tmp;
        return;
    }
    if(tmp.a > bestAns.a)
        return;
    State backup = tmp;
//    tmp.u[index] = pos;
    tmp.w[pos] += nums[index];
    tmp.a = max(tmp.w[0], tmp.w[1]);
    for(int i=0; i<2; i++)
        dp(i, index+1);
    tmp = backup;
}

int main()
{
    int t;
    scanf(" %d", &t);
    while(t--)
    {
        scanf(" %d", &len);
        for(int i=0;i<len;i++)
            scanf(" %d", &nums[i]);
        bestAns.a = oo;
        memset(&tmp, 0, sizeof(tmp));
        for(int i=0; i<2; i++)
            dp(i);
        printf("%d\n", bestAns.a);
    }
}
