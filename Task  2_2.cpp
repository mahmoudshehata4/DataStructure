#include<iostream>
using namespace std;


class queue{
    public:
    static const int size = 7;
    int arr[size];
    int rear,front;

    queue(){front = rear = -1;}

    bool isEmpty(){return (front == -1);}
    bool isFull(){return (rear == size-1);}

    void enqueue(int itm){
        if(isFull()){cout<<" The Queue is Full"<<endl;}
        else if(isEmpty()){
            front++;
            rear++;
            arr[rear] = itm;
        }
        else{
            rear++;
            arr[rear] = itm;
        }
    }
    void dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
        }
        else{
            front++;
        }
    }

    void display(){
        if(isEmpty()){cout<<" Queue is Empty"<<endl;}
        else{
            for(int x = front;x<=rear;x++){
                cout<< arr[x]<<"  ";
            }
        }
    }
    
};


int main(){

    queue x;
    x.enqueue(5);
    x.enqueue(7);
    x.enqueue(8);
    x.enqueue(10);
    x.enqueue(8);
    x.display();
    cout<<endl;
    x.dequeue();
    x.dequeue();
    x.display();


    return 0;
}
