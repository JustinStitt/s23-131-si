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

  ~SinglyLinkedList() { clear(); }

  void clear() {
    if (empty())
      return;
    Node *curr = head;
    while (curr) {
      Node *next_node = curr->next;
      delete curr;
      curr = next_node;
    }
  }

  bool exists(int element) {
    if (empty())
      return false;
    Node *curr = head;
    while (curr) {
      if (curr->data == element)
        return true;
      curr = curr->next;
    }

    return false;
  }

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

  void push_back(int element) {
    // what if the list is empty?
    if (empty()) {
      push_front(element);
      return;
    }

    // 1. create the new node
    ++size;
    Node *to_add = new Node{element, nullptr};
    // 2. navigate to the end of the list
    Node *curr = head;
    while (curr->next != nullptr) {
      curr = curr->next;
    }
    // wohoo, we are at the END
    // now just point curr->next to to_add
    curr->next = to_add;
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

  size_t getSize() { return size; }
};

int main() {
  SinglyLinkedList sll;
  sll.push_front(5);
  sll.push_front(9);
  sll.push_front(1);
  sll.push_front(2);
  sll.push_back(6);
  // 2 1 9 5 6
  sll.print();
  return 0;
}
