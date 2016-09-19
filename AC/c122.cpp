#include <cstdio>
#include <set>
using namespace std;

int main()
{
    set<unsigned> humble {1};
    int arrHanble[5842], ia=0;
    int arr1[][2] = {2, 1000000000, 3, 666666667, 5, 400000000, 7, 285714286};
    for(auto it = humble.begin(); it != humble.end() && (*it) <= 2000000000; ++it) {
        arrHanble[ia++] = *it;
        for(int i=0; i<4; i++)
            if(*it <= arr1[i][1])
                humble.insert((*it) * arr1[i][0]);
    }
    humble.clear();

    char orderStr[][3] = {"th", "st", "nd", "rd"};
    while(scanf(" %d", &ia), ia) {
        printf("The %d%s humble number is %d.\n", ia, (ia%10 > 0 && ia%10 < 4 && ia/10%10 != 1) ? orderStr[ia%10] : orderStr[0], arrHanble[ia-1]);
    }
}
