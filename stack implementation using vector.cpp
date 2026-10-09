#include <bits/stdc++.h>
#include <vector>

using namespace std;


class Stack{
    public:
    vector<int>vec;
    
    void push(int val){
      vec.push_back(val);
      
    }void pop(){
        vec.pop_back();
    }
    int top(){
        
        return vec.back(); 
    }
    bool empty(){
        return vec.size()==0;
    }
    int print(){
        return vec.back();
    }
    
};

int main() {
	// your code goes here
	Stack s1;
	
	s1.push(3);
	s1.push(5);
	s1.push(6);
	
	while(!s1.empty()){
	   cout<< s1.print()<<" ";
	   s1.pop();
	}
	
}
