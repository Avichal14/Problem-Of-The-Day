#include<iostream>
using namespace std;
class Node {
public:
     int data;
     Node* next;

     Node() {
          this->data = 0;
          this->next = NULL;
     }
     Node(int data) {
          this->data = data;
          this->next = NULL;
     }
};
void print(Node*& head) {
     Node* temp = head;
     while (temp != NULL) {
          cout << temp->data << " ";
          temp = temp->next;
     }
}
// insert node right at the head of linked list
void insertAtHead(Node*& head, Node*& tail, int data) {

     Node* newNode = new Node(data);
     newNode->next = head;
     if (head == NULL) {
          tail = newNode;
     }
     head = newNode;
};
//inset node a t tail
void insertAtTail(Node*& head, Node*& tail, int data) {
     Node* newNode = new Node(data);
     if (tail == NULL) {
          tail = newNode;
          head = newNode;
     }
     else {
          tail->next = newNode;
     }
     tail->next = newNode;

     tail = newNode;

};
int findLength(Node*& head) {
     int len = 0;
     Node* temp = head;
     while (temp != NULL) {
          temp = temp->next;
          len++;
     }
     return len;
}
void insertAtPosition(int data, int position, Node*& head, Node*& tail) {
     if (head == NULL) {
          Node* newNode = new Node(data);
          head = newNode;
          tail = newNode;
          return;
     }
     //1.find the positioin : prev and curr
     if (position == 0) {
          insertAtHead(head, tail, data);
          return;
     }
     int len = findLength(head);
     if (position >= len) {
          insertAtTail(head, tail, data);
     }
     int i = 1;
     Node* prev = head;
     while (i < position) {
          prev = prev->next;
          i++;
     }
     Node* curr = prev->next;

     // step2
     Node* newNode = new Node(data);
     // step3 
     newNode->next = curr;
     // step4 
     prev->next = newNode;
}
void deleteNode(int position, Node*& head, Node*& tail) {
     if (head == NULL) {
          cout << "cannot delete empty";
          return;
     }
     if (position == 1) {
          Node* temp = head;
          head = head->next;
          temp->next = NULL;
          delete temp;
          return;
     }
     int len = findLength(head);
     if (position == len) {
          int i = 1;
          Node* prev = head;
          while (i < position - 1) {
               prev = prev->next;
               i++;
          }
          prev->next = NULL;
          Node* temp = tail;
          tail = prev;
          delete temp;
          return;

     }
}
int main() {
     Node* head = NULL;
     Node* tail = NULL;
     insertAtHead(head, tail, 20);
     insertAtHead(head, tail, 50);
     insertAtHead(head, tail, 60);
     insertAtHead(head, tail, 90);
     insertAtTail(head, tail, 77);

     print(head);
     insertAtPosition(101, 2, head, tail);
     cout << endl;
     print(head);
     return 0;
}