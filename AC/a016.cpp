#include<iostream>
using namespace std;

#define FLAG_SUCCESS 1022
int sudoku[9][9];

bool check_sudoku()
{
    unsigned int flag;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++) {
            flag = 0; // reset flag
            for(int k=0;k<3;k++)
                for(int m=0;m<3;m++)
                    flag |= 1<<sudoku[k][m];
            if(flag != FLAG_SUCCESS)
                return false;
        }
    for(int i=0;i<9;i++) {
        flag = 0;
        for(int j=0;j<9;j++)
            flag |= 1<<sudoku[i][j];
        if(flag != FLAG_SUCCESS)
            return false;
        flag = 0;
        for(int j=0;j<9;j++)
            flag |= 1<<sudoku[j][i];
        if(flag != FLAG_SUCCESS)
            return false;
    }
    return true;
}

int main()
{
    while(cin>>sudoku[0][0]) {
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++)
            {
                if(i+j==0) continue;
                cin>>sudoku[i][j];
            }
        if(check_sudoku())
            cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}
