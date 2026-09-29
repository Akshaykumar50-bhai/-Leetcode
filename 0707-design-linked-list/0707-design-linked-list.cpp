class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
       this->next = nullptr;
    }
};


class MyLinkedList {
public:
    Node* head;
    Node* tail;
    int size ;
    MyLinkedList() {
        head = tail = nullptr;
        size = 0;
    }
    
    int get(int index) {
        if(index < 0||index >= size) return -1;
         Node* temp = head;
        if(size == 1) return head->data;
        if(index == size-1) return tail->data;
        for(int i = 0;i< index;i++){
            temp = temp->next;  
        }
        return temp->data;
    }
    
    void addAtHead(int val) {
        Node* temp = new Node(val);
        if(head == nullptr){ head = temp;  tail = temp;}
        else {
        temp->next = head;
        head = temp;
        }
        size++;
    }
    
    void addAtTail(int val) {
        Node* temp = new Node(val);
        if(tail == nullptr){tail = temp; head = temp;}
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index <0 || index > size) return;

        Node* N = new Node(val);
        Node* temp = head;
        if(index == 0 ){
            addAtHead(val);
            return;
        }
        else if(index == size){
            tail->next = N;
            tail = N;
        }
        else if(index < size){
             
          for(int i=0;i<index-1;i++){
                temp = temp->next;
            }
            N->next = temp->next;
            temp->next = N;
        }
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index<0 || index>=size) return;
        Node* temp = head;
         if(size == 1){ head = tail = nullptr; size--;}
         else if(index == 0){ head = head->next; size--;}
        else if(index >= 0 && index < size){
            
         for(int i =0;i<index-1;i++){
            temp = temp->next;
         }
          
          
          temp->next = temp->next->next;
          if(index == size-1) tail = temp;
           size--; 
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */