/******************************************************************************

A stack is a linear data structure that follows the principle of Last In First Out (LIFO). This means the last element inserted inside the stack is removed first.
Applications of Stack Data Structure
Although stack is a simple data structure to implement, it is very powerful. The most common uses of a stack are:

To reverse a word - Put all the letters in a stack and pop them out. Because of the LIFO order of stack, you will get the letters in reverse order.
In compilers - Compilers use the stack to calculate the value of expressions like 2 + 4 / 5 * (7 - 9) by converting the expression to prefix or postfix form.
In browsers - The back button in a browser saves all the URLs you have visited previously in a stack. Each time you visit a new page, it is added on top of the stack. When you press the back button, the current URL is removed from the stack, and the previous URL is accessed.

*******************************************************************************/
#include <iostream>
using namespace std;

#define MAX 3

class Stack{
  int top ;
  int min;
  public:
   int a[MAX];
   Stack(){
       top=-1;
   }
   void push(int x);
   int pop();
   void peek();
   void isEmpty();
   void min_num();
};

int Stack::pop(){
    int num=0;
    if(top<0){
        cout<<"Under flow";
    }else{
       num=a[top];
       top--;
    }
    return num;
}
void Stack::push(int x){
    if(top==-1){
        min=x;
    }else{
        if(x<min){
            min=x;
        }
    }
    if(top<MAX){
        top++;
        a[top]=x;
    }
    if(top>=MAX){
        cout<<"Overflow..cannot add more members"<<endl;
    }
}
void Stack::peek(){
    cout<<"Number at the top is "<<a[top]<<endl;
}
void Stack::isEmpty(){
    if(top==-1){
        cout<<"Stack is empty";
    }else{
        cout<<"Stack is not empty. You can still add "<<MAX-top<<" numbers"<<'\n';
    }
}
void Stack::min_num(){
    cout<<"min no is "<<min;
}
int main(){
    Stack s;
    s.push(2);
    s.push(1);
    s.push(5);
    int a=s.pop();
    cout<<"Popped number is "<<a<<endl;
    s.peek();
    s.isEmpty();
    s.min_num();
    return 0;
}
