#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

char s[5009999];

int main()
{
    //ifstream fin("pd.in");
    //ofstream fout("pd.out");
    int n, m, i, a;
    char *p;

    while (1)
    {
        cin >> n >> m;
        if ( n==0 && m==0 ) break;
        p=s+1;
        *p=0;
        for (i=0; i<n; i++)
        {
            cin >> p;
            while (*p) ++p; // 將指標移到字串尾巴 
        }
        for (i=0; i<m; i++)
        {
            cin >> a;
            cout << s[a];
        }
        cout << endl;
    }

//    system("PAUSE");
    return 0;
}

