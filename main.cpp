#include <iostream>
#include "functions.h"
using namespace std;

void stackMenu(Stack &stack) {
    int choice, value;
    do {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Check if Empty\n";
        cout << "5. Get Size\n";
        cout << "6. Clear Stack\n";
        cout << "7. Print Stack\n";
        cout << "0. Exit Stack Menu\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                stack.push(value);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                cout << "Top element: " << stack.peek() << endl;
                break;
            case 4:
                cout << (stack.isEmpty() ? "Stack is empty" : "Stack is not empty") << endl;
                break;
            case 5:
                cout << "Stack size: " << stack.size() << endl;
                break;
            case 6:
                stack.clear();
                cout << "Stack cleared!" << endl;
                break;
            case 7:
                stack.printStack();
                break;
            case 0:
                cout << "Exiting Stack Menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 0);
}

void queueMenu(Queue &queue) {
    int choice, value;
    do {
        cout << "\n--- Queue Menu ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek\n";
        cout << "4. Check if Empty\n";
        cout << "5. Get Size\n";
        cout << "6. Print Queue\n";
        cout << "0. Exit Queue Menu\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                queue.enqueue(value);
                break;
            case 2:
                queue.dequeue();
                break;
            case 3:
                cout << "Front element: " << queue.peek() << endl;
                break;
            case 4:
                cout << (queue.isEmpty() ? "Queue is empty" : "Queue is not empty") << endl;
                break;
            case 5:
                cout << "Queue size: " << queue.size() << endl;
                break;
            case 6:
                queue.printQueue();
                break;
            case 0:
                cout << "Exiting Queue Menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 0);
}

int main() {
    Stack stack;
    Queue queue;
    int h;

    do {
        cout << "\n--- Main Menu ---\n";
        cout << "1. Stack Operations\n";
        cout << "2. Queue Operations\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> h;

        switch (h) {
            case 1:
                stackMenu(stack);
                break;
            case 2:
                queueMenu(queue);
                break;
            case 0:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (h != 0);

    return 0;
}
