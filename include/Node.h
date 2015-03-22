
#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

template <class T>
class Node {
public:
  Node();
  Node(T);
  ~Node();

private:
  Node *next;
  T data;

  T getData();
  void setData(T);

  Node* getNext();
  void setNext(Node*);

};

// Constructor por defecto
template<class T>
Node<T>::Node() {
  data = nullptr;
  next = nullptr;
}

// Constructor por parámetro
template<class T>
Node<T>::Node(T data_) {
  data = data_;
  next = nullptr;
}

template<class T>
T Node<T>::getData() {
  return data;
}

template<class T>
Node<T>* Node<T>::getNext() {
  return next;
}

template<class T>
void Node<T>::setData(T data_) {
  data = data_;
}

template<class T>
void Node<T>::setNext(Node* next_) {
  next = next_;
}

template<class T>
Node<T>::~Node() {}

#endif // NODE_H
