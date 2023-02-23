#include <iostream>

struct Node {
  int data;
  Node *next;
};

class SinglyLinkedList {
private:
  Node *head;
  size_t size;

public:
  SinglyLinkedList() { head = nullptr; }

  void push_front(int element) {
    // make the new node (note: its not connected to anything rn)
    Node *to_add = new Node{element, nullptr};
    ++size; // added a node, thus increasing our size
    if (empty()) {
      head = to_add;
      return;
    }
    // otherwise, list not empty
    to_add->next = head;
    head = to_add;
  }

  void print() {
    Node *curr = head;
    while (curr != nullptr) {
      std::cout << curr->data << " -> ";
      curr = curr->next;
    }
    std::cout << "\n";
  }

  bool empty() { return head == nullptr; }
};

int main() {
  SinglyLinkedList sll;
  sll.push_front(5);
  sll.push_front(9);
  sll.push_front(1);
  sll.push_front(2);
  // 2 1 9 5
  sll.print();
  return 0;
}
