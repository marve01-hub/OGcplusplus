#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int dt){
        
    } 
};

int main() {
    Node* obj1 = new Node(5);
    Node* obj2 = new Node(7);
    Node* obj3 = new Node(3);

    obj1->next = obj2;
    obj2->next = obj3;
    obj3->next = NULL;

    Node* temp = obj1;
    while(temp != NULL){
        
    }
    
}

