#include "functions.h"
//Node constructor
Node::Node(int value) {
    data = value;
    next = NULL;
    cout << "Node created" << endl;
}
// Node destructor
Node::~Node() {

}
//node set value
void Node::setNext(Node *val) {
    next = val;
}
// node get value
Node* Node::getNext() {
    return next;
}
// node set data
void Node::setData(int data) {
    this->data = data;
}
// node get data
int Node::getData() {
    return data;
}
//constructor of stack
Stack::Stack(){
   count=0;
   top=nullptr;
}
//destructor
Stack::~Stack(){
}
//function to check if stack is empty or not
bool Stack:: isEmpty(){
    if (count==0)
        return true;
    else
        return false;
}
//function to push into stack
void Stack::push(int data){
  Node * newNode = new Node(data);  //create a node
  newNode->setNext(top);  // point the node to top
  top = newNode;    // top is now equal to new node
  count++;
  //increment size
}
//function to pop
void Stack::pop(){
  if (count==0){
    cerr<< "Stack is empty" << endl;   // check for empty stack
    return ;
  }
    Node * temp = top;   //create a temporary pointer
    top = top->getNext();
    int poppedValue = temp->getData();
    delete temp;
    count--;  //decrement size
}
//function to get size
int Stack::size(){
    return count;
}
//function to clear stack
void Stack::clear(){
    count=0;   //make size zero
}
//function to print stack
void Stack::printStack(){
  Node * temp = top;
    while (temp != NULL){
      cout << temp->getData() << " -> ";
    }
    cout << "nullptr "<< endl;
}

int Stack:: peek(){
  if (count==0){
    return -1;   // if it is empty return -1

  } else {
    return top->getData();
  }
}
//queue constructor
Queue::Queue(){
    top=nullptr;
    bottom=nullptr;
    count= 0;

}
//queue destructor
Queue::~Queue() {
    Node* temp = top;
    while (temp != nullptr) {
        Node* nextNode = temp->getNext();  // Store the next node
        delete temp;  // Delete the current node
        temp = nextNode;  // Move to the next node
    }
}

//function to check emptiness
bool Queue::isEmpty(){
    if (count == 0)
        return true;
    else
        return false;
}
//functio to add element in a queue
void Queue:: enqueue(int data){
   Node * newNode = new Node(data);
   if (count==0){   //check if it is empty then both top and bottom will point to newnode
     top = newNode;
     bottom = newNode;
     }
   bottom->setNext(newNode);
   bottom=newNode;
   count++;  //increment size
}
//functio to delete element from a queue
void Queue::dequeue(){
    if (count==0) {  // if it is empty
        cerr<< "Queue is underflow" << endl;
        cout << "Queue is empty. Cannot dequeue.\n";
        return ;
    }
    Node * temp = top;
    if (count==1)  // ifstack has one element
      {
      top=nullptr;
      bottom=nullptr;
      }
      else{
          top=top->getNext();
           int poppedValue = bottom->getData();
        }


    delete temp;
    count--;  //decrement size


}
//function to get size
int Queue:: size(){
    return count;
}
//function to print queue
void Queue:: printQueue(){
    if (count==0) {
        cout << "Queue is empty.\n";
        return;
    }
    Node * temp = top;
    while (temp != NULL){
        cout << temp->getData() << " -> ";
    }
    cout << "nullptr "<< endl;


}


int Queue:: peek(){
    if (count==0){
        return -1;  //returns -1 if it is empty

    } else {
        return top->getData();
    }
}