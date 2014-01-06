#include<iostream>
using namespace std;
int main()
{
	int ta;
	cin>>ta;
	while(ta--)
	{
		int ia,ib;
		cin>>ia>>ib;
		if(ia%2==0)
		{
			if(ia+1<=ib)cout<<1<<endl;
			else cout<<ib<<endl;
		}
		else
		{
			if(ia+2<=ib)cout<<2<<endl;
			else cout<<ib+1<<endl;
		}
	}
}
