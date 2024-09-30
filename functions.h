#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Node {
private:
    int data;
    Node *next;

public:
    Node(int value);

    ~Node();

    void setNext(Node *val);

    Node *getNext();

    void setData(int data);

    int getData();
};

class Stack {
private:
    Node *top;
    int count;

public:

    Stack();

    ~Stack();

    bool isEmpty();

    void push(int data);

    void pop();

    int size();

    void clear();

    void printStack();

    int peek();
};

class Queue {
private:
    Node * top;
    Node * bottom;
    int count;
public:
    Queue();

    ~Queue();

    bool isEmpty();

    void enqueue(int data);

    void dequeue();

    int size();

    void printQueue();

    int  peek();
};


#endif
