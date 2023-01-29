#include<bits/stdc++.h>
#include "list.h"
using namespace std;

int main()
{
    List l;
    l.push_front(1);
    l.push_back(3);
    l.push_front(0);
    l.push_back(4);
    l.insert(2,2);
    l.insert(10,0);
    // l.pop_front();
    // l.pop_back();
    Node* head = l.begin();
    while (head!=NULL)
    {
        cout<<head->getData()<<" -> ";
        head = head->getNext();
    }
    cout<<endl;
    // cout<<l.search(3)<<endl;
    // int key;
    // cin>>key;
    // cout<<l.recursiveSearch(key)<<endl;
    // int pos;
    // cin>>pos;
    // l.remove(pos);
    // Node* head2=l.begin();
    // while (head2!=NULL)
    // {
    //     cout<<head2->getData()<<" -> ";
    //     head2 = head2->getNext();
    // }
    
    Node* head2=l.begin();
    head2=l.reverse(head2);
    while (head2!=NULL)
    {
        cout<<head2->getData()<<" -> ";
        head2 = head2->getNext();
    }
    cout<<endl;
    
    return 0;
}