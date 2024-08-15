#include <iostream>
using namespace std;
class Node {
public:
    int id;
    string name;
    double salary;
    Node* next;
};
void push(Node** head, int id, string name, double salary)
{
    Node* new_node = new Node();
    new_node->id = id;
    new_node->name = name;
    new_node->salary = salary;
    new_node->next = *head;
    *head=new_node;
}
Node* maxsalary(Node* head) {
    Node* maxNode = head;
    Node* current = head->next;
    while (current != NULL) {
        if (current->salary > maxNode->salary) {
            maxNode = current;}
        current = current->next;}
    return maxNode;
}
void print(Node* n)
{
    while(n!=NULL)
    {cout << "EMP ID: " << n->id << ", Name: " << n->name << ", Salary: " << n->salary
<< endl;;
        n=n->next;}
    cout<<"\n";
}
int main()
{
    Node* head=NULL;
    push(&head,4, "hardik", 33000);
    push(&head,3, "gokul", 34000);
    push(&head,2, "rohit", 45000);
    push(&head,1, "bumrah", 93000);
    cout << "Employee Details:" << endl;
    print(head);
    Node* x = maxsalary(head);
    if (x != NULL) {
        cout << "\nEmployee with the highest salary:\n";
        cout << "EMP ID: " << x->id << ", Name: " << x->name << ", Salary: " << x->salary
<< endl;
    } else
    {cout << "\nNo employees found.\n";}
    return 0;
}
