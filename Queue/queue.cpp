#include <iostream>
using namespace std;

#define SIZE 5

class Queue {
    int arr[SIZE], front, rear;

    public:
    Queue(){
        front = -1;
        rear = -1;
    }

    bool isEmpty();
    bool isFull();
    void enqueue(int value);
    int dequeue();
    void display();
};

typedef class Queue Q;

int main(){
    Q q1;

    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);
    q1.display();

    q1.dequeue();
    q1.display();


    return 0;
}

bool Queue:: isEmpty(){
    if (front == -1){
        return true;
    } 
    else{
        return false;
    }
}

bool Q:: isFull(){
    if(front == 0 && rear == SIZE-1){
        return true;
    }
    return false;
}

void Q:: enqueue(int value){
    if(isFull()){
        cout<<"Queue is full"<<endl;
    }else{
        if(front == -1) front =0;
        rear++;
        arr[rear]= value;
        cout<<value<<"inserted"<<endl;
    }
}

int Q:: dequeue(){
    if(isEmpty()){
        cout<<"queue is empty"<<endl;
        return -1;
    }else{
        int temp = arr[front];
        if(front >= rear){
            front = -1;
            rear = -1;
        }else{
            front++;
        }
        cout<<temp<<"deleted"<<endl;
        return temp;
    }
}

void Q:: display(){
    int i;
    if (isEmpty()) {
      cout << endl
         << "Empty Queue" << endl;
    } else {
      cout << endl
         << "Front index-> " << front;
      cout << endl
         << "Items -> ";
      for (i = front; i <= rear; i++)
        cout << arr[i] << "  ";
      cout << endl
         << "Rear index-> " << rear << endl;
    }
}