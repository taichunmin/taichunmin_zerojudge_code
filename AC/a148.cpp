#include <iostream>
using namespace std;

int main()
{
    int n, total, ia;
    while(cin>>n) {
        total = 0;
        for(int i=0; i<n; i++) {
            cin>>ia;
            total += ia;
        }
        if(total > n * 59)
            cout << "no" <<endl;
        else cout<<"yes"<<endl;
    }
}
