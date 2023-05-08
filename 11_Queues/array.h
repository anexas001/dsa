#include<iostream>
using namespace std;

template<typename T>
class Queue{
    int size, qfront, rear;
    T* arr;
public:
    Queue(){
        size = 100001;
        arr = new T[size];
        qfront =  0;
        rear = 0;
    }   

    // Public functions of Queue
    bool isEmpty(){
        if(qfront==rear){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(T data){
        if(rear == size){
            cout<<"Queue is full"<<endl;
        } 
        else{
            arr[rear]=data;
            rear++;
        }
    }

    void dequeue(){
        if(qfront==rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
            arr[qfront]=-1;
            qfront++;
            if(qfront==rear){
                qfront = 0 ;
                rear = 0;
            }
        }
    }
    T front(){
        if(qfront == rear){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }
};