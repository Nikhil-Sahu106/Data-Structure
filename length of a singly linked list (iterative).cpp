#include <iostream>

class Node{
    public:
    int data;
    Node *next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

Node* TakeInput(){
    
    int data;
    std::cin>>data;
    
    Node *head = NULL;
    while(data != -1){

        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
        } 
        
        else{
            Node *temp = head;
            
            while(temp->next != NULL){
                
                temp = temp->next;
                }
                temp->next = newNode;
            }
            std::cin>>data;
        }
        return head;
}

void count(Node *head){
    
    int c = 0;
    while(head != NULL){
        head = head->next;
        c++;
    }
    std::cout << c << std::endl;;
    
}


void print(Node *head){
    
    while(head != NULL){
        std::cout<<"[" << head->data<<"]";
        if(head->next !=NULL)
            std::cout<< " -> ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main(){
    
    int t;
    std::cin>>t;
    while(t--){
        
        Node *head = TakeInput();
        print(head);
        count(head);
    }
}


