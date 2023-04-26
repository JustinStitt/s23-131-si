#include <iostream>

struct Node {
  int value;
  Node *next;

  Node(int v, Node *n) : value(v), next(n) {} // initialization list
};

class SLL {
private:
  Node *head, *tail;

public:
  SLL() : head(nullptr), tail(nullptr) {}

  void push_back(int data) {
    // create new node in memory
    Node *to_add = new Node(data, nullptr);
    // link it up to our linked list
    if (head == nullptr) { // uh, oh! list is empty
      head = to_add;
      tail = to_add;
      return;
    }

    // list has some stuff in it
    tail->next = to_add;
    tail = to_add;
  }

  void print(Node *ptr) {
    // 1 base case
    if (ptr == nullptr) {
      return; // stop (void return nothing)
    }
    // 3 recursive call (with updated parameters)
    print(ptr->next);
    std::cout << ptr->value << " ----> ";
    // 2 visit (what are we doing)
  }

  int sum(Node *ptr) {
    if (ptr == nullptr)
      return 0;

    return ptr->value + sum(ptr->next);
  }

  int sum() { return sum(this->head); }

  void print() { print(this->head); }
};

int main() {
  int x, y, z;
  std::cout << x << " " << y << " " << z << "\n";
  SLL sll;
  sll.push_back(0);
  sll.push_back(1);
  sll.push_back(2);
  sll.push_back(3);
  sll.push_back(4);
  sll.push_back(5);
  sll.push_back(6);
  sll.push_back(7);

  sll.print();
  std::cout << "\nSum: " << sll.sum() << "\n";
  return 0;
}
