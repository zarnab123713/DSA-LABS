#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

// Doubly Linked List class
class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // 1. Insert at the beginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (!head) { // Empty list
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        cout << val << " inserted at the beginning.\n";
    }

    // 2. Insert at the end
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!tail) { // Empty list
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        cout << val << " inserted at the end.\n";
    }

    // 3. Delete from the beginning
    void deleteFromBeginning() {
        if (!head) {
            cout << "List is empty. Nothing to delete.\n";
            return;
        }
        Node* temp = head;
        cout << "Deleting " << temp->data << " from the beginning.\n";
        head = head->next;
        if (head)
            head->prev = nullptr;
        else
            tail = nullptr; // List becomes empty
        delete temp;
    }

    // 4. Display forward
    void displayForward() {
        if (!head) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = head;
        cout << "Forward: ";
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Display backward
    void displayBackward() {
        if (!tail) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = tail;
        cout << "Backward: ";
        while (temp) {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};

// Main function to test the doubly linked list
int main() {
    DoublyLinkedList list;

    list.insertAtBeginning(10);
    list.insertAtBeginning(20);
    list.insertAtEnd(5);
    list.displayForward();
  list.displayBackward();

    list.deleteFromBeginning();
    list.displayForward();
    list.displayBackward();

    return 0;
}

