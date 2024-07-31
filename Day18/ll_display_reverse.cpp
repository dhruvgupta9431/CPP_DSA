#include<iostream>
using namespace std;

class Node{
    public:
        int value;
        Node* next; //Node pointing to next node
        Node(int data){
            value=data;
            next=NULL;
        }
};
void insertAtHead(Node* &head,int value){
    Node* new_node=new Node(value);
    head=new_node;
    new_node->next=head;
        }

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void displayreverse(Node* head){
    Node* temp=head;
    if(temp==NULL){
        return;
    }
    else{
        displayreverse(temp->next);
        cout<<temp->value;
    }
    return;
}
int main(){
    Node* head=NULL;
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    display(head);
    cout<<"Display in Reverse";
    //displayreverse(head);
}
