#include <iostream>
using namespace std;
class Node
{
public:
 int data;
 Node* next;
};
void ins(Node** head, int newData)
{
 Node* newNode = new Node();
 newNode->data = newData;
 newNode->next = *head;
 *head = newNode;
}
void del(Node** head)
{
 if (*head == NULL) {
 cout << "List is empty" << std::endl;
 return;
 }
 Node* temp = *head;
 *head = (*head)->next;
 delete temp;
}
void printList(Node* head)
{
 while (head != NULL)
 {cout << head->data << " ";
 head = head->next;}
 cout << endl;
}
int main()
{
 Node *head=new Node();
 Node *second=new Node();
 Node *third=new Node();
 head->data=2;
 head->next=second;
 second->next=third;
 second->data=3;
 third->data=4;
 cout<<"before ins:";
 printList(head);
 ins(&head, 1);
 cout << "after ins: ";
 printList(head);
 cout<<"after deleting:";
 del(&head);
 printList(head);
 return 0;
}
