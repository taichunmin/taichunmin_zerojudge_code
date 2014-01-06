#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#define PRIME_SIZE 100000
using namespace std;

int p[9593]={2,3,5,7};
int p_count=4;

void produce_prime()
{
    for(int i=11,ta=4;i<=PRIME_SIZE;ta=6-ta,i+=ta)
    {
        bool isprime=true;
        int ta=(int)sqrt(i+0.0)+2;
        for(int j=2;j<p_count && p[j]<ta && p[j]<i;j++)
            if(i%p[j]==0)
            {
                isprime=false;
                break;
            }
        if(isprime)p[p_count++]=i;
    }
}

bool check_prime(int ia)
{
    if(ia==1)return false;
    bool isprime=true;
    for(int i=0;i<p_count && p[i]*p[i]<=ia && isprime;i++)
        if(ia%p[i]==0)isprime=false;
    return isprime;
}

int cmp(const void* a,const void* b)
{
    return *(int*)a-*(int*)b;
}

void* cmp_interval_array = p;
int cmp_interval_sizeof = sizeof(int);
int (*cmp_interval_func)(const void*,const void*) = cmp;
int cmp_interval_size;
int cmp_interval(const void* a,const void* b) // a  [b-1,b)  左界限包含，右界限不包含 
{
    // Usage: ((int)bsearch(&ia,p,p_count+1,sizeof(int),cmp_interval)-(int)p)/sizeof(int);
    // Zerojudge a121
    int index = ((int)b-(int)cmp_interval_array)/cmp_interval_sizeof;
    if( index == 0 ) // 最左邊的區間 
    {
        if( cmp_interval_func( a, b) < 0 ) return 0;
        else return 1;
    }
    else if( index == cmp_interval_size ) // 最右邊的區間
    {
        if( cmp_interval_func( a, (void*)((int)b-cmp_interval_sizeof) ) >= 0 ) return 0;
        return -1;
    }
    else if( cmp_interval_func( a, b) >= 0 ) return 1; // 大於等於右界限
    else if( cmp_interval_func( a, (void*)((int)b-cmp_interval_sizeof) ) < 0 ) return -1; // 小於左界限 
    else return 0;
}

int main()
{
    produce_prime();
    //cout<<"共 "<<p_count<<endl;
    cmp_interval_size = p_count;
    int ia,ib,ic,id,ie;
    while(scanf("%d %d",&ia,&ib)!=EOF)
    {
        ic=0;
        if( ia < PRIME_SIZE )
        {
            id = ((int)bsearch(&ia,p,p_count+1,sizeof(int),cmp_interval)-(int)p)/sizeof(int);
            if( ia == p[id-1] ) id--;
            ie = ((int)bsearch(&ib,p,p_count+1,sizeof(int),cmp_interval)-(int)p)/sizeof(int);
            if( ib == p[ie] ) ie++;
            ic+=ie-id;
            ia = PRIME_SIZE;
        }
        if( ia%6!=1 && ia%6!=5)
        {
            if(ia%6==0)ia+=1;
            else ia+=5-(ia%6);
        }
        for(int i=ia,j=((i%6==1)?2:4); i<=ib; j=6-j,i+=j)
            if( check_prime(i) ) ic++;
        printf("%d\n",ic);
    } 
}
