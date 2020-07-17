#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node *link;

node()
{
   link=NULL;
   data=0;
}
node( int d) {
    data = d;
  }
};
class link_list{
public:
    node *head;
    link_list()
    {
        head=NULL;

    }
    link_list(node * n) {
    head = n;
               }
void append(node *d)
{
    if(head==NULL)
    {
        head=d;
        d->link=NULL;


        cout<<"Append Success ";
        }else{
        node *ptr=head;

          while(ptr->link!=NULL)
          {
              ptr=ptr->link;
          }
          ptr->link=d;
          d->link=NULL;

              cout<<"append Success ";
        }
    }
void print()
{ if (head==NULL)
{
    cout<<"no node present";
} else{
    node *temp=head;
  while(temp!=NULL)
  {
      cout<<temp->data<<"->"<<endl;
      temp=temp->link;
  }
}}
};

int main() {

  { link_list s;
    int l,d;

    cout<<"Enter the number of node you want to append"<<endl;
    cin>>l;
  while(l!=0)

  { node *n1=new node();
         cout<<"enter the value of each node";
      cin>>d;
      n1->data=d;
      s.append(n1);
      l--;
  }
 s.print();
}


}
