// Stack using LinkedList
#include<iostream>
using namespace std;


// Creating Node of Linked list
class node{
    public:
    node *next;
    int data;
};


// Creating linked list with name Stack
class Stack{
    public:
    node *top;
    Stack(){top = NULL;}
    
    bool isEmpty(){return (top == NULL);}


    void peek(){
        if(isEmpty()){cout<<"The linked list is Empty"<<endl;}
        else{cout<<top->data<<endl;}
    }
    

    void push(int itm){
        node *newNode = new node();
        newNode->data=itm;
        if(isEmpty()){
            newNode->next=NULL;
            top = newNode;
        }
        else{
            newNode->next = top;
            top = newNode;
        }
    }


    void pop(){
        if(isEmpty()){cout<<" Stack is Empty"<<endl;}
        else{
            node *delpointer = top;
            top = top->next;
            delete delpointer;
        }
    }
    

    void display(){
        node *temp = top;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
};


int main(){
    Stack x;
    x.push(7);
    x.peek();
    x.push(5);
    x.peek();
    x.push(6);
    x.display();
    cout<<endl;
    x.pop();
    x.pop();
    x.display();
    return 0;
}
