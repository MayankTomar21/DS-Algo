#include <iostream>
using namespace std;

#define max 10
int size =0; 


struct stack {
    int items[max];
    int top;
};

typedef struct stack st;

void createEmptyStack(st *s) {
    s->top = -1;
}

int isFull(st *s) {
    if(s->top == max-1)
      return 1;
    else  
      return 0;
}

int isEmpty(st *s) {
    if(s->top == -1)
     return 1;
    else 
       return 0;
}

void push(st *s, int item) {
    if(isFull(s)) 
     cout << "Stack overflow";
    else 
      s->top++;
      s->items[s->top] = item;
    size++;
}

void pop(st *s) {
    if(isEmpty(s))
      cout << "Stack underflow";
    else 
       cout << "Item popped: " << s->items[s->top];
       s->top--;
    size--;
}

void printStack(st *s) {
    cout << "Stack: ";
    for(int i =0; i<size; i++) {
        cout << s->items[i] << " ";
    }
}

int main() {
    int ch;
    st *s = (st *)malloc(sizeof(st));

    createEmptyStack(s);
    push(s,1);
    push(s,2);
    push(s,3);
    push(s,4);
    printStack(s);
    pop(s);
    cout << "\nStack after popping: ";
    printStack(s);
    
    return 0;
}
