#include<iostream>
using namespace std;

int va[200000][3];

int cmp1(const void* a,const void* b)
{
	if( *(((int*)a)+2) != *(((int*)b)+2) ) return *(((int*)a)+2) - *(((int*)b)+2);
	else return *(int*)a - *(int*)b; 
}
int cmp2(const void* a,const void* b)
{
	return *(int*)a - *(int*)b; 
}

int main()
{
	int ta;
	cin>>ta;
	for(int t1=0;t1<ta;t1++)
	{
		va[t1][0]=t1+1;
		cin>>va[t1][1]>>va[t1][2];
	}
	qsort(va,ta,sizeof(int)*3,cmp1);
	for(int i=0;i<ta;i++)
	{
		cout<<i;
		for(int j=0;j<3;j++)cout<<" "<<va[i][j];
		cout<<endl;
	}
	system("pause");
	int cnt=0,endtime=0;
	for(int i=0;i<ta;i++)
		if(endtime<va[i][1])
		{
			endtime=va[i][2];
			va[cnt][0]=va[i][0];
			cnt++;
		}
	qsort(va,cnt,sizeof(int)*3,cmp2);
	cout<<cnt<<endl;
	for(int i=0;i<cnt;i++)
		cout<<((i==0)?"":" ")<<va[i][0];
	cout<<endl;
	system("pause");
}
