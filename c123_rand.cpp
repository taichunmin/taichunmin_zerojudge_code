#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

int arr[1000];

void shuffle(int size)
{
    int cnt = rand()%2000, tmp;
    for(int i=0;i<size;i++)
        arr[i] = i+1;
    while(cnt--)
    {
        int x = rand()%size, y = rand()%size;
        tmp = arr[x];
        arr[x] = arr[y];
        arr[y] = tmp;
    }
}

void random_stack( int size )
{
    vector<int> stack;
    int top = 0;
    for(int i=0;i<size;i++)
    {
        stack.push_back(i+1);
        while(stack.size()>0 && rand()%2)
        {
            arr[top++] = stack.back();
            stack.pop_back();
        }
    }
    while(stack.size()>0)
    {
        arr[top++] = stack.back();
        stack.pop_back();
    }
}

int main()
{
    srand(time(NULL));
    for(int t2=0;t2<10;t2++)
    {
        int size = rand()%1000+1, ta=rand()%100+1;
        cout<<size<<endl;
        for(int t1=0;t1<ta;t1++)
        {
            if(rand()%2) shuffle(size);
            else random_stack(size);
            for(int i=0;i<size;i++)
                cout<<arr[i]<<( i == size-1 ? '\n' : ' ' );
        }
        cout<<0<<endl;
    }
    cout<<0<<endl;
}
