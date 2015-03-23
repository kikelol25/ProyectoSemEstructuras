/*
* Nombre: Juan Jesus Gomez Barajas
* Codigo: 214519467
* Seccion: D01
*/

#include "ListO.h"

bool ListO::isAvalidPos(Node<Obra>* p) {
  Node<Obra>* aux = anchor;

  while (aux != nullptr) {
    if (aux == p) {
      return true;
    }
    aux = aux->getNext();
  }
  return false;
}

////////////////////////////////////////////

ListO::ListO() {
  anchor = nullptr;
}

ListO::~ListO() {
  deleteAll();
}

bool ListO::isEmpty() {
  return anchor == nullptr;
}

void ListO::insertData(Node<Obra>* p, Obra& e) {
  if (p != nullptr and !isAvalidPos(p)) {
    throw ListException ("Posicion invalida al insertar");
  }

  Node<Obra>* aux = new Node<Obra> (e);
  if (aux == nullptr) {
    throw ListException("Memoria insufuciente al insertar");

    if (p == nullptr) {
      aux->setNext(anchor);
      anchor = aux;
    } else {
      aux->setNext(p->getNext());
      p->setNext(aux);
    }
  }
}

void ListO::deleteData(Node<Obra>* p) {
  if (!isValidPos(p)) {
    throw ListException("Posicion es invalida al eliminar");
  }

  if (p == anchor) {
    anchor = p->getNext();
  } else {
    previousPos(p)->setNext(p->getNext());
  }
  delete p;
}

Node<Obra>* ListO::firstPos() {
  return anchor;
}

Node<Obra>* ListO::lastPos() {
  if (isEmpty()) {
    return nullptr;
  }

  Node<Obra>* aux = anchor;
  while (aux->getNext() != nullptr) {
    aux = aux->getNext();
  }

  return aux;
}

Node<Obra>* ListO::previousPos(Node<Obra>* p) {
  Node<Obra>* aux = anchor;

  while (aux != nullptr and aux->getNext() != p) {
    aux = aux->getNext();
  }

  return aux;
}

Node<Obra>* ListO::nextPos(Node<Obra>* p) {
  if (!isAvalidPos(p)) {
    return nullptr;
  }
  return p->getNext();
}

Node<Obra>* ListO::findData(Obra e) {
  Node<Obra>* aux = anchor;

  while (aux != nullptr and aux->data != e) {
    aux = aux->getNext();
  }

  return aux;
}

Obra ListO::retrieve(Node<Obra>* p) {
  if (!isAvalidPos(p)) {
    throw ListException("Error!, Posicion invalida");
  }

  return p->getData();
}

void ListO::print() {
  Node<Obra>* aux = anchor;

  while (aux != nullptr) {
    cout << aux->getData() << endl;
    aux = aux->getNext();
  }

}

void ListO::deleteAll() {
  Node<Obra>* aux;

  while (anchor != nullptr) {
    aux = anchor;
    anchor = anchor->getNext();
    delete aux;
  }
}
