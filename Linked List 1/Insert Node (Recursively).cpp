#include<iostream>

class Node{
    public:
    
    int data;
    Node *next;
    
    Node(int data){
        
        this->data= data;
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


Node* InsertNode(Node* head,int data,int pos){
    
    if(head == NULL){
        return head;
    }
    
    
    
    if(pos == 0){
        
        Node* newNode = new Node(data);
        newNode->next = head; 
        head = newNode;
        return newNode;
    }
    
    head->next = InsertNode(head->next,data,pos - 1);
    
    return head;
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
    
    Node* head = TakeInput();
    
    int Data,Pos;
    std::cout<<"Value to be insert: ";
    std::cin>>Data;
    std::cout<<"At Index: ";
    std::cin>>Pos;
    head = InsertNode(head, Data, Pos);
    print(head);
    
}



