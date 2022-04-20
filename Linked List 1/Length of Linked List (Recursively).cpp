
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

int CountRec(Node *head){
    
    int count;
    if(head == NULL){
        return 0;
    }
    
    if(head != NULL){
        
       count = CountRec(head->next) + 1;
    }
    
    return count;
    
}

int main()
{
    Node* head = TakeInput();
    int c = CountRec(head);
    std::cout << c << std::endl;

    return 0;
}