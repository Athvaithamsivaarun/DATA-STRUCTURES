#include <iostream>
#include <string>
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
            arr[++top] = str[i];} }
 ~Stack() {
        delete[] arr; }
 char Pop() {
        if (top < 0) {
            cout << "Stack underflow! Cannot pop from an empty stack." << endl;
            throw out_of_range("Stack is empty");
        }
        return arr[top--]; }
   void Print() {
        if (top < 0) {
            cout << "Stack is empty." << endl;
            return; }
        for (int i = 0; i <= top; i++) {
            cout << arr[i];}
    }
};
int main() {
    string input = "GeeksQuiz";
    Stack a(input);
for (int i = 0; i < a.Size; i++) {
        cout << a.Pop() << " ";}
    return 0;
}
