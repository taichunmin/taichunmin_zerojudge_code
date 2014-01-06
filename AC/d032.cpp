// ACM-382 c032
#include<iostream>
using namespace std;

int main()
{
    printf("PERFECTION OUTPUT\n");
    int ia;
    while(cin>>ia,ia)
    {
      int ib=(ia>1);
      for(int i=2;i*i<=ia;i++)
        if(ia%i==0)
        {
          ib+=i;
          if(i*i!=ia)ib+=(ia/i);
        }
      printf("%5d  ",ia);
      if(ib==ia)cout<<"PERFECT";
      else if(ib>ia)cout<<"ABUNDANT";
      else cout<<"DEFICIENT";
      cout<<endl;
    }
    printf("END OF OUTPUT\n");
    //system("pause");
}
