#include<iostream>
using namespace std;

struct node_t
{
  node_t *group,*pre,*next,*lastpos;
}va[1000000],*first,*tail,*temp;

void init_node(int fia=1000000)
{
  while(--fia>=0)
  {
    va[fia].group=&va[fia];
    va[fia].pre=NULL;
    va[fia].next=NULL;
    va[fia].lastpos=NULL;
  }
}
node_t* find_set(node_t* fva)
{
  if(fva!=fva->group)
    fva->group=find_set(fva->group);
  return fva->group;
}
void link(node_t* fva,node_t* fvb)
{
  if(fva<fvb)fvb->group=fva;
  else fva->group=fvb;
}
void union_set(int fia,int fib)
{
  link(find_set(&va[fia]),find_set(&va[fib]));
}
void add_list(node_t* fva)
{
  if(first==NULL)
  {
    first=tail=fva;
  }
  else
  {
    temp=find_set(fva)->lastpos;
    if(temp==NULL || temp==tail)
    {
      temp=tail;
      tail=fva;
    }
    fva->pre=temp;
    fva->next=temp->next;
    if(fva->next!=NULL)fva->next->pre=fva;
    if(fva->pre!=NULL)fva->pre->next=fva;
  }
  find_set(fva)->lastpos=fva;
}
void pop_list()
{
  if(first!=NULL)
  {
    cout<<first-(&va[0])<<endl;
    if(find_set(first)->lastpos==first)
      find_set(first)->lastpos=NULL;
    temp=first;
    first=first->next;
    temp->pre=temp->next=NULL;
  }
  if(first==NULL)tail=NULL;
}
/*
void debug_node(node_t* fva)
{
  cout<<"debug_node(): first="<<first-(&va[0])<<", tail="<<tail-(&va[0])<<endl<<"LIST: ";
  while(fva!=NULL)
  {
    cout<<fva-(&va[0])<<" ";
    fva=fva->next;
  }
  cout<<endl;
}
*/
int main()
{
  int ia,ib,ic,id,ci=0;
  char ca[100];
  while(cin>>ia)
  {
    init_node();
    cout<<"Line #"<<++ci<<endl;
    while(ia--)
    {
      cin>>ib;
      if(ib>0)cin>>ic;
      ib--;
      while(ib--)
      {
        cin>>id;
        union_set(ic,id);
      }
    }
    first=tail=temp=NULL;
    while(cin>>ca)
    {
      if(ca[0]=='E')
      {
        cin>>ib;
        add_list(&va[ib]);
      }
      else if(ca[0]=='D')
      {
        pop_list();
      }
      else if(ca[0]=='S')break;
      //debug_node(first);
    }
  }
  //system("pause");
}
