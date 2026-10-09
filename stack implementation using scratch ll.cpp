#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int val){
        data = val;
        next = nullptr;
    }
};
class Stack{
    Node* head;
    Node* tail;

    
    public:
    Stack(){
    head= tail = nullptr;
    }
    
    void push(int val){
        
        Node* newNode= new Node(val);
        newNode->next= head;
        head= newNode;
    }
      void pop(){
        if(empty()){
            cout<<"Stack is empty ";
            return;
        }
        Node* temp;
        temp= head;
        head= head->next;
        delete temp;
    }
    
    int top(){
        if(head== nullptr){
            cout<<"stack is empty";
            return -1;
        }
        return head->data;
        
    }
    bool empty(){
        return head==nullptr;
    }
    int print(){
        return head->data;
    }
    
};


int main() {
    Stack s1;
    s1.push(2);
    s1.push(3);
    s1.push(5);
    s1.push(6);
    
    
    while(!s1.empty()){
        cout<<s1.print()<<" ";
        s1.pop();
        
    }
    
}
