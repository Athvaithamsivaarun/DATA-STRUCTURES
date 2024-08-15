#include<iostream>
using namespace std;
class node
{
public:
    int data;
    string name;
    int id;
    int tasktime;
    node*next;
};
node*ins(node*head,int n)
{
    node*new_node=new node();
    new_node->data=n;
    if(head==NULL)
        {new_node->next=new_node;
        return new_node;}
    node*temp=head;
    while(temp->next!=head)
    {temp=temp->next;}
    temp->next=new_node;
    new_node->next=head;
    return head;
}
void modify(node*head)
{
    int sum=0;
    node*temp=head;
    do{sum+=temp->data;
    temp=temp->next;
    }while(temp!=head);
    temp=head;
    do{temp->data=sum-temp->data;
    temp=temp->next;
    }while(temp!=head);
}
void print(node*head)
{
    node*temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}
int main()
{
    node*head=NULL;
    head=ins(head,2);
    head=ins(head,3);
    head=ins(head,4);
    head=ins(head,5);
    head=ins(head,6);
    node*t=head;
    print(head);
    modify(head);
    print(head);
}
