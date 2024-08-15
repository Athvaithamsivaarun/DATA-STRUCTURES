#include<iostream>
using namespace std;
class node
{
public:
    string name;
    //string id;
    int data;
    int task;
    node*next;
};
node*employee_t(node*head)
{
    node*temp=head;
    int i=0,i1;
    string n;
    if(head!=NULL)
    {do
        {
            if(temp->task<temp->next->task)
            {
                i=temp->task;
                i1=temp->data;
                n=temp->name;
            }
            temp=temp->next;
        }
        while(temp!=head);
    }
            cout<<"employee who completed task 1st:"<<i1;
            cout<<endl;
}
int main()
{
    node*head=new node();
    node*sec =new node();
    node*third=new node();
    //node*fourth=new node();

    head->task=2;
    head->name='gokul';
    head->data=34;
    head->next=sec;

    sec->task=1;
    sec->name='hardik';
    sec->data=33;
    sec->next=third;

    third->task=3;
    third->name='rohit';
    third->data=45;
    third->next=head;
     employee_t(head);
}
