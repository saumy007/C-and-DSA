//Doubly Linked List
#include<iostream>
using namespace std;
class Node{
    public :
    int data;
    Node* prev;
    Node* next;
    Node( int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;

    }
};

void print(Node* head){
    Node* temp =  head;
    while(temp != NULL){
        cout << temp -> data;
        temp = temp -> next;
    }
    cout << endl;
}

int getlen(Node* head){
    int len = 0;
    Node* temp =  head;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
return len;
}


int main(){


    Node* node1= new Node(10);
    Node* head = node1;
    print(head);
    cout << "The length of DLL is  " << getlen(head);



    return 0;    
}