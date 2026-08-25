

    int startpoint_cycle(){
        
        
        
        //Returing Starting point of cycle and removing cycle from linked list
        
        
        Node* slow = head;
        Node* fast = head;
        
        while (fast!=nullptr && fast->next!=nullptr){
            slow= slow->next;
            fast = fast->next->next;
            if (slow==fast){
                break;
                
            }
        }
        slow =head;
        Node* prev = nullptr;
        while(slow!=fast){
            slow = slow->next;
            
            prev = fast;
            
            fast = fast->next;
            
        }prev->next = nullptr;
        return slow->data;
        
        


