#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int sa[1000];
	ifstream fin("ACM_ac.txt");//_in_zerojudge
	int ta=0;
	while(fin>>sa[ta])ta++;
	fin.close();
	for(int i=0;i<ta;i++)
		for(int j=i+1;j<ta;j++)
			if(sa[i]>sa[j])
			{
				int temp=sa[i];
				sa[i]=sa[j];
				sa[j]=temp;
			}
	ofstream fout("ACM_ac-1.txt");//_in_zerojudge
	for(int i=0;i<ta;i++)fout<<sa[i]<<endl;
}
