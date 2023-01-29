#include<iostream>
using namespace std;

class List; //forward declaration 
class Node{
    int data;
    Node* next;
public:
    
    Node(int d):data(d),next(NULL){} //Initializer List
    int getData(){
        return data;
    }
    Node* getNext(){
        return next;
    }
    ~Node(){
        if(next!=NULL){
            delete next;
        }
        cout<<"Deleting the Node with Data "<<data<<endl;
    }

    friend class List; //so that List class use private members of Node class i.e. data & next
};

class List{
    Node* head;
    Node* tail;
    int searchHelper(Node *start, int key){
		//base case
		if(start==NULL){
			return -1;
		}
		// value matches
		if(start->data==key){
			return 0;
		}
		//remaining part of the linked list
		int subIdx = searchHelper(start->next,key);
		if(subIdx==-1){
			return -1;
		}
		return subIdx + 1;

	}
public:
    List():head(NULL),tail(NULL){}

    Node* begin(){
        return head;
    }

    void push_front(int data){
        if(head==NULL){
            Node* n = new Node(data);
            head=tail=n;
            //"new" is used because we want this node to persist in the memory even after the function call is over.
            // That is why we are using the dynamic memory allocation
            // if you use static allocation then this node will deleted as soon as this fuction call is over
        }
        else{
            Node* n=new Node(data);
            n->next=head;
            head=n;
        }
    }
    void push_back(int data){
        if(head==NULL){
            Node* n = new Node(data);
            head = tail = n;
        }
        else{
            Node* n = new Node(data);
            tail->next=n;
            tail=n;
        }
    }
    void insert(int data, int pos){
        if(pos==0){
            push_front(data);
        }
        else{
            Node* temp = head;
            for(int jump=1;jump<=pos-1;jump++){
                temp=temp->next;
            }
            Node* n = new Node(data);
            n->next=temp->next;
            temp->next=n;
        }
    }
    int search(int key){
        Node* temp = head;
        int index=0;
        while(temp!=NULL){
            if(temp->data==key){
                return index;
            }
            index++;
            temp=temp->next;
        }
        return -1;
    }
    int recursiveSearch(int key){
		int idx = searchHelper(head,key);
		return idx;
	}
    // delete the first node
    void pop_front(){
        Node* temp = head;
        head = head->next;
        temp->next=NULL;
        delete temp;
        
    }

    // delete the last node
    void pop_back(){
        Node* second_last=head;
        while(second_last->next->next!=NULL){
            second_last = second_last->next;
        }
        delete second_last->next;
        second_last->next=NULL;
        tail=second_last;
    }

    // delete the node from given position
    void remove(int pos){
        Node* temp = head;
        if(pos==0){
            pop_front();
        }
        else{
            for (int i = 0; temp != NULL && i < pos - 1; i++)
                temp = temp->next;
            Node* next = temp->next->next;
            Node* n = temp->next;
            temp->next=next;
            n->next=NULL;
            delete n;
        }
    }

    Node* reverse(Node* &head){
        Node* c = head;
        Node* p = NULL;
        Node* n;
        while(c!=NULL){
            // save the next node
            n=c->next;
            // make the current node point to the previous
            c->next=p;
            // update p and c
            p=c;
            c=n;

        }
        head = p;
        return head;
    }

    ~List(){ //destructor
        if(head!=NULL){
            delete head;
            head = NULL;
        }
    }
};