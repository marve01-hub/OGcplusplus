#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(){
    } 

    Node(int dt){
        this->data = dt;
    } 

    Node(int dt, Node* next){
        this->data = dt;
        this->next = next;
    } 
};

class LinkedList{
public:
    Node* head;
    int data;

    LinkedList(){

    }
                //6 -> 1-> 3 -> 4 -> 5 -> 7

    //insett(int value); //insertAtBegin(int val) insertAtEnd(int val)
    //delete(int N)

    void insertAtEnd(int data){
        
    }

};

int main() {
    Node* obj1 = new Node(5);
    Node* obj2 = new Node(7);
    Node* obj3 = new Node(3);
    Node* obj3 = new Node();

    obj1->next = obj2;
    obj2->next = obj3;
    obj3->next = NULL;

    Node* temp = obj1;

    while(temp != NULL){
        cout<<temp->data<<endl;   // equivalent to (*temp).data
        temp = temp->next;
    }

    // LinkedList* list = new LinkedList();


    // for(int i = 0; i < 10; i++){
    //     list->insertAtEnd(i);
    // }

    
}



