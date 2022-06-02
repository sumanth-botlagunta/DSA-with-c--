#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertathead(node* &head, int val){
    node* newnode = new node(val);
    newnode -> next = head;
    head = newnode;
}


void insertattail(node *&head, int val){
    node *n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void deleteathead(node* &head){
    if(head == NULL){
        return;
    }
    node *toDelete = head;
    head = head->next;
    delete toDelete;
}

void deletenode(node* &head, int val){
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        deleteathead(head);
        return;
    }
    node *temp = head;
    while(temp->next->data != val){
        temp = temp->next;
    }
    node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

node* reversecompletelist(node* head){
    node *prev = NULL;
    node *curr = head;
    node *next = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

node* reverselistrecursive(node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    node *newhead = reverselistrecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

node* reverseK(node* head, int k){
    node *prev = NULL;
    node *curr = head;
    node *next = NULL;
    int count = 0;
    while(curr != NULL && count < k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if(next != NULL){
        head->next = reverseK(next, k);
    }
    return prev;
}

void printlist(node* head){
    node* temp = head;
    while(temp!= NULL){
        cout << temp->data << "->";
        temp = temp->next;

    }
    cout << "NULL" << endl;
}

bool search(node* head, int key){
    node* temp = head;
    while(temp != NULL){
        if(temp -> data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
   
int main(){
    node *head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    insertathead(head, 7);
    insertattail(head, 5);
    insertattail(head, 6);
    insertattail(head, 8);
    insertattail(head, 9);
    insertattail(head, 10);
    printlist(head);
    // cout << "Reversed list is: " << endl;
    // node* rev = reverselistrecursive(head);
    // printlist(rev);
    int k = 3;
    cout << "Reversed list with k = " << k << " is: " << endl;
    node* revk = reverseK(head, k);
    printlist(revk);

    // deletenode(head, 2);
    // printlist(head);
    // deleteathead(head);
    // printlist(head);


    // if(search(head, 5)){
    //     cout << "5 Found" << endl;
    // }
    // else{
    //     cout << "5 Not Found" << endl;
    // }
    // if(search(head, 10)){
    //     cout << "10 Found" << endl;
    // }
    // else{
    //     cout << "10 Not Found" << endl;
    // }
    return 0;
}