#include<iostream>
using namespace std;

int main()
{
    freopen("d134-in.txt","w",stdout);
    int ia;
    cout<<"100 50"<<endl;
    srand(time(NULL));
    for(int i=0;i<200;i++)
    {
      ia=rand()%100+1;
      cout<<ia<<' '<<rand()%ia+1<<endl;
    }
    cout<<"0 0"<<endl;
    cout<<rand()%100+1<<' '<<rand()%100+1<<endl;
    //system("pause");
}
