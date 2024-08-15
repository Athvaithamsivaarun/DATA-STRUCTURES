#include<iostream>
 using namespace std;
 class node
 {
 public:
    int data;
    node*next;
 };
 node* create_node(int n,node*head)
 {
     node*new_node=new node();
     new_node->data=n;
     new_node->next=head;
     head=new_node;
     return head;
 }
 void display(node*head)
 {
      node*temp=head;
      while(temp!=NULL)
      {
          cout<<temp->data<<" ";
          temp=temp->next;
      }
 }
 int main()
 {
     cout<<"first linked list :"<<endl;
     node*head1=NULL;
     head1=create_node(1,head1);
     head1=create_node(2,head1);
     head1=create_node(3,head1);
     head1=create_node(4,head1);
     display(head1);
     cout<<endl;
     cout<<"second linled list :"<<endl;
     node*head2=NULL;
     head2=create_node(5,head2);
     head2=create_node(6,head2);
     head2=create_node(7,head2);
     head2=create_node(8,head2);
     display(head2);
     // merge
     node*head3=NULL;
     if (head1==NULL)
        cout<<"head is empty!!";
     if (head2==NULL)
        cout<<"head2 is empty!!";
     if (head1->data > head2->data)
     {
         //node*head3=NULL;
         head3=head1->data;
         head1=head1->next;
     }
     if (head2->data > head1->data)
     {
         //node*head3=NULL;
         head3=head2->data;
         head2=head3->next;
     }
     display(head3);
     return 0;
 }
