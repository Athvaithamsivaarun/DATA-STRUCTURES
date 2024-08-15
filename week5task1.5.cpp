#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node*next;
    node*insert_f(node*head,int n)
    {
        node*new_node=new node();
        new_node->data=n;
        if(head==NULL)
        {
            new_node->next=new_node;
        }
        else{
            new_node->next=head;
            node*temp=head;
            while(temp->next=head)
            {
                temp=temp->next;
            }
            temp->next=new_node;
            return new_node;
        }
    }
    void display()
    {
        node*temp=head;
        do
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
        while(temp!=head);
    }
};
int main()
{
    node*head=NULL;
    insert_f(20);
    insert_f(30);
    insert_f(40);
    insert_f(50);
    display();
}
