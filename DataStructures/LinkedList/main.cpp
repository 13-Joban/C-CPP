#include <iostream>

struct Node{ //Structure which acts as the blocks in the linked list

    int data; // The data part of the linked list
    Node* next; // The link part which is a pointer to next node in the list
};

Node* head; // The first element of the linked list

void insert(int data); // Function to insert an element to the linked list
void insert(int data,int index);// Function to inset an element at a specific index
void print(); // Function to print all the elements of the linked list
void recursivePrint(Node* nodeToPrint);//Print a the list recursively
void recursiveReversePrint(Node* nodeToReversePrint);
void deleteAt(int index);//Deletes an element at a specific index
void reverseList();//This will reverse the list instead of just printing a reverse of it
void recursiveReverse(Node* nodeToReverse);

int main() {
    int n, x;
    std::cout << "Hello Github!\n";
    head = NULL;

    std::cout << "How many numbers \n"; //Input for how many elements we want to add to the list
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << "Enter the integers to add to the list\n";
        std::cin >> x;
        insert(x); // Take n inputs from stdin and insert at the beginning of the list using insert()function
    }
    print();
    recursiveReversePrint(head);
    deleteAt(0);
    print();
    return 0;
}
void insert(int data){
    // If no index is provided then by default we place the new node in the front of the linked list

    Node* temp = new Node; //Make a new temp node
    temp -> data = data; // Set the data in node to our value
    temp -> next = head; // Set the value of pointer to next node as the previous value of first node
    head = temp; // Then make temp the first Node
}

void insert(int data,int index){
    Node* temp1 = new Node;
    temp1->data = data;
    temp1->next = NULL;
    if(index==0){
        temp1-> next = head; // Set the value of pointer to next node as the previous value of first node
        head = temp1; // Then make temp the first Node
        return;
    }
    Node* temp2 = head; // Sets the temporary node as the first node in order to go through the list
    for(int i = 0; i < index-1; i++){ // reach the node right before the index we want to insert the new node on
      temp2 = temp2 -> next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}

void reverseList(){
    Node *currentNode, *previous, *next;
    currentNode = head;
    previous = NULL;

    while(currentNode != NULL){
        next = currentNode->next;
        currentNode->next = previous;
        previous = currentNode;
        currentNode = next;
    }
    head = previous;
}

void deleteAt(int index){
    Node* temp;
    if(index == 0){
        temp = head;
        head = temp->next;
        delete temp;
        return;
    }
    Node* currentNode = head;
    for(int i =0; i < index-1; i++ ){
        currentNode = currentNode->next;
    }
    temp = currentNode->next;
    currentNode->next = temp->next;
    delete temp;

}

void print(){
    Node* temp = head; // Make a new node pointer that points to the first element in the list
    std::cout << "List is: ";
    // go through the list untill no more next elements to go to are left
    while(temp !=NULL){
        std::cout << temp -> data << " ";
        temp = temp -> next;
    }
    std::cout << "\n";

}

void recursivePrint(Node* nodeToPrint){
    if(nodeToPrint == NULL) {
        std::cout << std::endl;
        return;
    }
    std::cout << nodeToPrint->data << " ";
    recursivePrint(nodeToPrint->next);
}

void recursiveReversePrint(Node* nodeToReversePrint){
    if(nodeToReversePrint == NULL) {
        std::cout << std::endl;
        return;
    }
    recursiveReversePrint(nodeToReversePrint->next);
    std::cout << nodeToReversePrint->data << " ";
}

void recursiveReverse(Node* nodeToReverse){
    if(nodeToReverse->next == NULL){
        head = nodeToReverse;
        return;
    }
    recursiveReverse(nodeToReverse->next);
    Node *temp = nodeToReverse->next;
    temp->next = nodeToReverse;
    nodeToReverse->next = NULL;
}