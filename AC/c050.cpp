#include <iostream>
#include <cmath>
using namespace std;

int p[500000] = {2, 3, 5, 7};
int p_cnt = 4;

bool isPrime(int num)
{
    int ia = sqrt(num);
    for(int i=0; i<p_cnt && p[i] <= ia; i++)
        if(num % p[i] == 0)
            return false;
    return true;
}

int main()
{
    for(int i=11, j=2; i <= 500000; i+=j, j=6-j)
        if(isPrime(i))
            p[p_cnt++] = i;
    // cout<<p_cnt<<' '<<p[p_cnt-1]<<endl;
    int input;
    while(cin>>input, input)
    {
        bool wrongGoldbach = true;
        for(int i=1; i<p_cnt && p[i]<=(input>>1); i++)
            if(isPrime(input - p[i])) {
                wrongGoldbach = false;
                cout<<input<<" = "<<p[i]<<" + "<<input-p[i]<<endl;
                break;
            }
        if(wrongGoldbach)
            cout<<"Goldbach's conjecture is wrong."<<endl;
    }
}
