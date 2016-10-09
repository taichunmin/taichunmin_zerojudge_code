#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char flag[3000] = {};
    int n, prev, now, diff;
    while(cin>>n) {
      if(n<1) continue;
      cin>>prev;
      memset(flag, 0, n);
      bool jolly = true;
      for(int i=1; i<n; i++) {
        cin>>now;
        diff = now - prev;
        prev = now;
        if(diff<0) diff=-diff;
        if(jolly && diff > 0 && diff < n && !flag[diff])
          flag[diff] = 1;
        else jolly = false;
      }
      cout << (jolly ? "Jolly" : "Not jolly" ) << endl;
    }
}
