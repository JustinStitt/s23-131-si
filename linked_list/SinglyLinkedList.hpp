#ifndef _SINGLYLINKEDLIST_HPP
#define _SINGLYLINKEDLIST_HPP

template <class T> class SinglyLinkedList {
  struct Node { /* internal Node class */
    T data;
    Node *next;
    Node() : data{}, Node{nullptr} {}                        /* default ctor */
    Node(T _data, Node *_next) : data(_data), next(_next) {} /* multi-arg */
  };

  Node *head;
  Node *tail;
  unsigned size;

public:
  SinglyLinkedList() = default;
  ~SinglyLinkedList() { /* destroy allocated memory */ }
};

#endif /* _SINGLYLINKEDLIST_HPP */
