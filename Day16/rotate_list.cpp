#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
};
int main(){
    Node* n=new Node(5);
    Node* n1=new Node(6);
    Node* n2=new Node(7);
    Node* n3=new Node(8);
    n->next=n1;
    n1->next=n2;
    n2->next=n3;
    Node* temp=n;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }


}
