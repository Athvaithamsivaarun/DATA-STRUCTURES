#include <iostream>
#include <string>
using namespace std;
struct Student {
    string name;
    int id;
    Student* next;
};
class Stack {
private:
    Student* top;
public:
    Stack() : top(nullptr) {}
 void push(const string& name, int id) {
        Student* newStudent = new Student{name, id, top};
        top = newStudent;
        cout << "Student pushed: " << name << " (ID: " << id << ")\n";}
 void pop() {
        if (isEmpty()) {
            cout << "Stack is empty, cannot pop.\n";
            return;
        }
        Student* temp = top;
        top = top->next;
        cout << "Student popped: " << temp->name << " (ID: " << temp->id << ")\n";
        delete temp;  }
void peek() const {
        if (isEmpty()) {
            cout << "Stack is empty, nothing to peek.\n";
            return; }
        cout << "Top student: " << top->name << " (ID: " << top->id << ")\n"; }
 void print() const {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return;}
        Student* current = top;
        cout << "Students in stack:\n";
        while (current) {
            cout << current->name << " (ID: " << current->id << ")\n";
            current = current->next;} }
 bool isEmpty() const {
        return top == nullptr;}
~Stack() {
        while (!isEmpty()) {
            pop();} }};
int main() {
    Stack studentStack;
    studentStack.push("gokul", 34);
    studentStack.push("hardik", 33);
    studentStack.push("virat", 18);
    studentStack.peek();
    studentStack.print();
    studentStack.pop();
    return 0;}
