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
C++ ����@
�w�q�@�ӵ��c��Ӫ�F�@�Ӹ`�I�����c�G

 struct node
 {
    int self; //?�u
    node *left; //��??
    node *right; //�k??
 };
����A�ڭ̦b�j���@�Ӿ𪺮ɭԡA�q�@�Ӹ`�I�}�l�A�୺��������O������Ӥl�`�I�C�Ҧp�G

   A
B     C
A�O�Ĥ@�ӳX�ݪ��A�M�ᶶ�ǬOB�MC�F�M��A�OB���l�`�I�AC���l�`�I�C����ڭ̫��ӫO�ҳo�Ӷ��ǩO�H

�o�̴N���ӥ�queue��Ƶ��c�A�]��queue�ĥΥ��i���X( first-in-first-out )�����ǡC

�ϥ�C++��STL�禡�w�A�U�����{���X�����U�z�ѡG

 std::queue<node*> visited, unvisited; 
 node nodes[9];
 node* current;
 
 //unvisited.push(&nodes[0]);
 
 unvisited.push(&nodes[0]); //����root��Junvisited queue
 
 while(!unvisited.empty()) //�u��unvisited����
 {
    current=(unvisited.front()); //�ثe�������窺
 
    if(current->left!=NULL)
       unvisited.push(current->left); //�⥪���Jqueue��
 
    if(current->right!=NULL) //�k??�J�C�]?QUEUE�O�@?��?���X��?�ۡA�ҥH�Y�ϦZ���A?��L?��A�̵M?��????�C
       unvisited.push(current->right);
 
    visited.push(current);
 
    cout<<current->self<<endl;
 
    unvisited.pop();
 }
*/
