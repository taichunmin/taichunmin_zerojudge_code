#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;

int maze[30][30][30];

struct coord_S
{
    int p[3], len;
};
coord_S direct[] = { {1,0,0,1}, {-1,0,0,1}, {0,1,0,1}, {0,-1,0,1}, {0,0,1,1}, {0,0,-1,1} };

void coord_assign(coord_S &p, int x, int y, int z, int l = 1)
{
    p.p[0] = x; p.p[1] = y; p.p[2] = z;
    p.len = l;
}
coord_S coord_move( coord_S pa, coord_S pb )
{
    coord_S pc;
    coord_assign( pc, pa.p[0]+pb.p[0], pa.p[1]+pb.p[1], pa.p[2]+pb.p[2], pa.len+pb.len );
    return pc;
}
bool coord_cmp( coord_S pa, coord_S pb )
{
    return pa.p[0]==pb.p[0] && pa.p[1]==pb.p[1] && pa.p[2]==pb.p[2];
}
void coord_print( coord_S pa )
{
    printf("(%d,%d,%d) len=%d\t",pa.p[0],pa.p[1],pa.p[2],pa.len);
}

int main()
{
    int ix, iy, iz;
    char ca;
    while( cin>>ix>>iy>>iz, ix+iy+iz )
    {
        coord_S p_start, p_end, p_now;
        for(int i=0; i<ix; i++)
            for(int j=0;j<iy; j++)
                for(int k=0;k<iz;k++)
                {
                    cin>>ca;
                    maze[i][j][k] = (ca=='#'?-1:0);
                    if( ca == 'S' )
                        coord_assign(p_start, i, j, k);
                    if( ca == 'E' )
                        coord_assign(p_end, i, j, k);
                }
        int path = 0;
        // assign first point
        queue<coord_S> q1;
        q1.push(p_start);
        while( !q1.empty() )
        {
            p_now = q1.front();
            q1.pop();
            if( p_now.p[0]<0 || p_now.p[0]>=ix ) continue;
            if( p_now.p[1]<0 || p_now.p[1]>=iy ) continue;
            if( p_now.p[2]<0 || p_now.p[2]>=iz ) continue;
            int &ia = maze[ p_now.p[0] ][ p_now.p[1] ][ p_now.p[2] ];
            if( ia != 0 )
                continue;
            ia = p_now.len;
            // coord_print(p_now);
            if( coord_cmp( p_now, p_end ) )
            {
                path = 1;
                cout<<"Escaped in "<<ia-1<<" minute(s)."<<endl;
                break;
            }
            for(int i=0;i<6;i++)
                q1.push( coord_move( p_now, direct[i] ) );
        }
        if(path==0)
            cout<<"Trapped!"<<endl;
    }
}
