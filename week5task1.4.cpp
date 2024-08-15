#include <iostream>
using namespace std;
class Stack {
public:
    size_t Size;
    int top;
    char* arr;
    Stack(string str) {
        Size = str.length();
        top = -1;
        arr = new char[Size];
        for (int i = 0; i < Size; i++) {
            arr[++top] = str[i];   } }
~Stack() {
        delete[] arr;  }
 char Pop() {
        if (top < 0) {
            throw out_of_range("Stack is empty"); }
        return arr[top--];}
void Print() {
        if (top < 0) {
            cout << "Stack is empty." << endl;
            return; }
        for (int i = 0; i <= top; i++) {
            cout << arr[i]; } }
};
int main() {
    Stack a("hello");
    Stack b("hell3");
    if (a.top != b.top) {
        cout << "Given two Stacks are not same...";
        return 0;
    }
 try {
        while (true) {
            if (a.Pop() != b.Pop()) {
                cout << "Given two Stacks are not same...";
                return 0;}  } }
    catch (out_of_range e) {
        cout << "Given Stack is same...";
        return 0;} }
