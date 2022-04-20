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

/*void ithNode(Node *head,int position){
    int i=0;
    Node *temp = head;
    while(i < position){
        temp =  temp->next;
        i++;
    }
    if(i == position){
        std::cout<<"Value at the ith data node: "<<temp->data;
    }
}

Node* InsertAt(Node *head,int data,int position){
    int count = 0;
    Node *newNode = new Node(data);
    Node *temp = head;
    
    if(position == 0){
        newNode->next = head;
        head = newNode;
        return head;
    }
    
    while(count < position - 1 && temp->next !=NULL){
        temp = temp->next;
        count++;
    }
    
    if(temp->next !=  NULL){
    newNode->next = temp->next;
    temp->next = newNode;
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
    
}*/

Node* DeleteAt(Node *head,int position){
    
    int count = 0;
    Node *temp = head;
    
    if(position == 0){
        head = head->next;
        return head;
    }
    
    while(count <  position - 1 && temp->next != NULL){
        temp= temp->next;
        count++;
    } 
    if(temp->next != NULL){
        
        Node* a = temp->next;
        Node* b = a->next;
        temp->next = b;
        delete a;
    }
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
    
    int t;
    std::cin>>t;
    while(t--){
        
        Node *head = TakeInput();
        
        //count(head);
        
        int position;
        std::cout<<"Enter the position: ";
        std::cin>>position;
        head = DeleteAt(head,position);
        print(head);
    }
}
