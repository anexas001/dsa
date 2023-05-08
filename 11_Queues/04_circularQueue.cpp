#include<bits/stdc++.h>
using namespace std;

template<typename T>
class CircularQueue{ 
    T *arr;
    int front;
    int rear;
    int size;
public:
    CircularQueue(T n){
        size = n;
        arr = new T[size];
        front = rear = -1;
    }
    bool enqueue(T value){
        if((front==0 && rear==size-1)||(rear==(front-1)%(size-1))){
            cout<<"Queue is Full"<<endl;
            return false;
        }
        else if(front==-1){
            front = rear = 0;   
        }
        else if(rear == size-1 && front!=0){
            rear = 0;
        }
        else{
            rear++; 
        }
        arr[rear]=value;
        return true;
    }

    T dequeue(){
        if(front == -1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        T ans = arr[front];
        arr[front]=-1;
        if (front == rear){
            front = rear =0;
        }
        else if(front == size-1){
            front = 0;
        }
        else{
            front ++;
        }
        return ans;
    }
    bool isEmpty(){
        if(front==-1 && rear==-1){
            return true;
        }
        return false;
    }
    void display(){
        if(front == -1){
            printf("\nQueue is Empty");
            return;
        }
        printf("\nElements in Circular Queue are: ");
        if (rear >= front){
            for (int i = front; i <= rear; i++)
                cout<<arr[i];
            }
        else{
            for (int i = front; i < size; i++)
                cout<<arr[i];
  
            for (int i = 0; i <= rear; i++)
                cout<<arr[i];
        }
    }
};

int main(){
    int size;
    cin>>size;
    CircularQueue<int> q(size);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    q.display();
    cout<<endl;
    
    return 0;
}