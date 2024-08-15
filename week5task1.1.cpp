#include <iostream>
#include <string>
using namespace std;
class Employee {
public:
    string Name;
    int id;
    float salary;
 Employee(string N, int i, float s) {
        Name = N;
        id = i;
        salary = s; }
    Employee() {
        Name = "";
        id = 0;
        salary = 0.0;
    }
};
class Stack {
private:
    int Size;
    int top;
    Employee* arr;
public:
    Stack(int size) {
        Size = size;
        top = -1;
    arr = new Employee[Size];}
   ~Stack() {
        delete[] arr;}
 void Push(const Employee& emp) {
        if (top >= Size - 1) {
            cout << "Stack overflow! Cannot push more elements." << endl;
            return;
        }
        arr[++top] = emp;
    }Employee Pop() {
        if (top < 0) {
            cout << "Stack underflow! Cannot pop from an empty stack." << endl;
            throw out_of_range("Stack is empty"); }
        return arr[top--];}
void Print() {
        if (top < 0) {
            cout << "Stack is empty." << endl;
            return; }
        for (int i = 0; i <= top; i++) {
            cout << "Name: " << arr[i].Name << ", ID: " << arr[i].id << ", Salary: " << arr[i].salary <<
endl; }
    }
Employee Peek() {
        if (top < 0) {
            cout << "Stack is empty. Cannot peek." << endl;
            throw out_of_range("Stack is empty");
        }
        return arr[top];
    } };
int main() {
    Stack a(8);
    a.Push(Employee("hardik", 1, 100000));
    a.Push(Employee("gokul", 2, 100000));
    a.Print();
    a.Pop();
    //cout<<"after pop:"<<endl;
    a.Print();
    return 0;
}
