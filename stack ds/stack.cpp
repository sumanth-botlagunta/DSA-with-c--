#include <iostream>
using namespace std;

#define MAX 10
int size = 0;

struct stack
{
    int items[MAX];
    int top;
};

typedef struct stack st;

// creating an empty stack
void createStack (st* s){
    s-> top = -1;
}

bool isFull (st* s){
    if(s->top == (MAX - 1)){
        return true;
    }else{
        return false;
    }
}

bool isEmpty (st* s){
    if(s->top == -1){
        return true;
    }else{
        return false;
    }
}

void push (st*s, int value){
    if(isFull(s)){
        cout<<"Stack is full \n";
    }else{
        s->top++;
        s->items[s->top] = value;
        size++;
    }
}

void pop (st* s){
    if(isEmpty(s)){
        cout<<"Stack is empty \n";
    }else{
        cout <<"element poped: "<<s->items[s->top]<<endl;
        s->top--;
        size--;
    }
}

void peek (st* s){
    if(isEmpty(s)){
        cout<<"Stack is empty \n";
    }else{
        cout <<" top element is: "<<s->items[s->top]<<endl;
    }
}

void printStack(st* s){
    cout<<"stack is:"<<endl;
     if(isEmpty(s)){
        cout<<"Stack is empty \n";
    }else{
        for(int i=0;i < size ;i++){
            cout<<s->items[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    st *s = (st*)malloc(sizeof(st));
    createStack(s);
    push(s,1);
    push(s,2);
    push(s,3);
    push(s,4);
    push(s,5);
    peek(s);
    push(s,6);
    printStack(s);
    pop(s);
    printStack(s);
    return 0;
}