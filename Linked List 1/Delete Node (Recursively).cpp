
#include <iostream>

using namespace std;

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

void print(Node *head){
    
    while(head != NULL){
        std::cout<<"[" << head->data<<"]";
        if(head->next !=NULL)
            std::cout<< " -> ";
        head = head->next;
    }
    std::cout << std::endl;
}

Node* DeleteNode(Node* head,int pos){
    
    if(head == NULL){
        return head;
    }
    
    if(pos == 0){
        Node* a = head;
        Node* b = a->next;
        head = b;
        delete a;
        return b;
    }
    
    head->next = DeleteNode(head->next,pos - 1);
    
    return head;
        
}

int main()
{
    Node* head = TakeInput();
    print(head);
    
    int Pos;
    std::cout <<"Enter index of Node to be removed: ";
    std::cin >> Pos;
  
    head = DeleteNode(head,Pos);
    
    std::cout <<"After deletion of node: ";
    print(head);

    return 0;
}