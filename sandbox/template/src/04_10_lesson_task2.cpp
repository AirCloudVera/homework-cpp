#include <iostream>

struct Node {
  Node* next_;
  int data_;
};

class LinkedList {
  Node* head = nullptr;

 public:
  void Print();
  void Push(int var);
  void Reverse();
};