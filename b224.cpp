#include<iostream>
#include<queue>
using namespace std;

struct x_y_type
{
  int x;
  int y;
};
typedef x_y_type *x_y;

int main()
{
  int ta;
  int ia[100][100];
  string sa[100];
  queue<x_y_type> qua;
  int ib[4][2]={0,-1,
                1,0,
                0,1,
                -1,0};
  while(cin>>ta)
  {
    for(int i=0;i<ta;i++)getline(cin,sa[i]);
    for(int i=0;i<ta;i++)
      for(int j=0;j<100;j++)ia[i][j]=-1;
    for(int i=0;i<ta;i++)
      for(int j=0;j<sa.size();j++)
        if(sa[i][j]=='K')
        {
          x_y_type tempa;
          tempa.x=i;
          tempa.y=j;
          qua.push_back(tempa);
          ia[i][j]=0;
          i=ta;
          j=sa.size();
        }
    while(!qua.empty())
    {
      x_y tempa=&qua.front();
      for(int i=0;i<4;i++)
      {
        int ic=tempa->x+ib[i][0],id=tempa->y+ib[i][1];
        if(ia[ic][id]==-1)
        {
          if(sa[ic][id]=='#')ia[ic][id]=-2;
  system("pause");
}

/*
3
##########
#K......@#
##########
3
##########
#K..#...@#
##########
*/

/*
C++ 的實作
定義一個結構體來表達一個節點的結構：

 struct node
 {
    int self; //?据
    node *left; //左??
    node *right; //右??
 };
那麼，我們在搜索一個樹的時候，從一個節點開始，能首先獲取的是它的兩個子節點。例如：

   A
B     C
A是第一個訪問的，然後順序是B和C；然後再是B的子節點，C的子節點。那麼我們怎麼來保證這個順序呢？

這裡就應該用queue資料結構，因為queue採用先進先出( first-in-first-out )的順序。

使用C++的STL函式庫，下面的程式碼能幫助理解：

 std::queue<node*> visited, unvisited; 
 node nodes[9];
 node* current;
 
 //unvisited.push(&nodes[0]);
 
 unvisited.push(&nodes[0]); //先把root放入unvisited queue
 
 while(!unvisited.empty()) //只有unvisited不空
 {
    current=(unvisited.front()); //目前應該檢驗的
 
    if(current->left!=NULL)
       unvisited.push(current->left); //把左邊放入queue中
 
    if(current->right!=NULL) //右??入。因?QUEUE是一?先?先出的?构，所以即使后面再?其他?西，依然?先????。
       unvisited.push(current->right);
 
    visited.push(current);
 
    cout<<current->self<<endl;
 
    unvisited.pop();
 }
*/
