// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    
    Node(int val){
        data = val ;
        next = nullptr;
        
    }
};
class linked_list {
    Node* head;
     Node* tail;
    public:
    
    linked_list(){
        head = tail= nullptr;
      
    }
    
    void push_back(int val){
        
        Node* newNode= new Node(val);
        
        if(head==nullptr){
            head = tail= newNode;
            
        }else{
            tail->next =newNode;
            tail= newNode;
            
        }
    }
    void print_ll(){
        Node* temp = head;
        while(temp!= nullptr){
            cout<<temp->data<<"->";
            temp= temp->next;

        }
        cout<<"null"<<endl;

    }
    

};

int main() {
    linked_list ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.print_ll();

	

}

