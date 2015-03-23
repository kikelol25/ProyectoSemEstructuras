/*
* Nombre: Juan Jesus Gomez Barajas
* Codigo: 214519467
* Seccion: D01
*/
#ifndef CATEGORIA_H
#define CATEGORIA_H

#include <string>

class Categoria {
public:
  Categoria();
  ~Categoria();
  std::string getName() { return name; }
  int getElements() { return elements; }

  void setName(std::string val) { name = val; }
  void setElements(int val) { elements = val; }
private:
  std::string name;
  int elements;
};

#endif // CATEGORIA_H
