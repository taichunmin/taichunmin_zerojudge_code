#include <cstdio>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;

int nums[100] = {}, len = 0;
set<int> sums, tmp;

int main()
{
    int t;
    scanf(" %d", &t);
    while(t--)
    {
        scanf(" %d", &len);
        int sum = 0, ia;
        sums.clear();
        for(int i=0; i<len; i++) {
            scanf(" %d", &ia);
            sum += ia;
            tmp.clear();
            tmp.insert(ia);
            for(auto it=sums.begin(); it!=sums.end(); ++it)
                tmp.insert(*it + ia);
            sums.insert(tmp.begin(), tmp.end());
        }
        printf("%d\n", *sums.lower_bound(ceil(sum/2.0)));
    }
}
