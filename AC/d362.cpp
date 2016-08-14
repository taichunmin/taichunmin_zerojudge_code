#include <iostream>
#include <cmath>
using namespace std;

int p[32768] = {2, 3, 5, 7};
int p_cnt = 4;

int twin[100000] = {3, 5};
int twin_cnt = 2;

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
    for(int i=11, j=2; i <= 4473; i+=j, j=6-j)
        if(isPrime(i))
            p[p_cnt++] = i;
    for(int i=2; twin_cnt<100000; i++)
        if(isPrime(6*i-1) && isPrime(6*i+1))
            twin[twin_cnt++] = 6*i-1;
    int ia;
    while(cin>>ia)
        cout<<"(" <<twin[ia-1] <<", " <<twin[ia-1]+2 <<")" <<endl;
}
