#include<iostream>
using namespace std;

int main()
{
	int ia,ib,ic,id;
	while(cin>>ia>>ib>>ic>>id,ia+ib+ic+id)
	{
		bool ba=true;
		if(ia%ic!=0 || ib%id!=0)
			if(ia%id!=0 || ib%ic!=0)ba=false;
		if(ba)cout<<ia*ib/ic/id<<endl;
		else cout<<-1<<endl;
	}
}
	