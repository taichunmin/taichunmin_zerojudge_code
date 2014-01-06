#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    string input,sa[3];
    while(getline(cin,input))
    {
        istringstream ssin(input);
        int stage = 0;
        for(int i=0;i<3;i++)
            getline(ssin,sa[i],',');
    }
}
