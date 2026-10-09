#include <iostream>
#include <list>

using namespace std;


class Stack{
    list<int>ll;
    public:
    void push(int val){
        ll.push_front(val);
    }

    void pop(){
        ll.pop_front();
        
    }

    int top(){
       return ll.front();
    }

    
    bool empty(){
        return ll.size()==0;
        }
    
    void print(){
       cout<<top();
    }
    
};



int main() {
   
    Stack s1;
    cout<<s1.empty()<<endl;

    s1.push(8);
    s1.push(9);
    s1.push(3);

    while(!s1.empty()){
        cout<<s1.top()<<endl;
        s1.pop();
    }
    
    
    
    return 0;
}

