#include<iostream>
using namespace std;

bool first;

struct Node
{
  int d;
  Node *l,*r;
};

void build_BST(Node* &ta,int fib)
{
  if(ta==NULL)
  {
    ta=new Node;
    ta->d=fib;
    ta->l=ta->r=NULL;
  }
  else if(ta->d > fib)build_BST(ta->l,fib);
  else build_BST(ta->r,fib);
}
void prefix_BST(Node* ta)
{
  if(ta==NULL)return ;
  if(first)first=false;
  else cout<<" ";
  cout<<ta->d;
  prefix_BST(ta->l);
  prefix_BST(ta->r);
}
void free_BST(Node* ta)
{
  if(ta==NULL)return;
  free_BST(ta->l);
  free_BST(ta->r);
  delete ta;
}

int main()
{
  int ia;
  while(cin>>ia)
  {
    Node* head=NULL;
    first=true;
    int ib;
    for(int i=0;i<ia;i++)
    {
      cin>>ib;
      build_BST(head,ib);
    }
    prefix_BST(head);
    free_BST(head);
    cout<<endl;
  }
  //system("pause");
}
