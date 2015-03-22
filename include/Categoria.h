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
  std::string get_name() { return name; }
  int get_elements() { return elements; }

  void set_name(std::string val) { name = val; }
  void set_elements(int val) { elements = val; }
private:
  std::string name;
  int elements;
};

#endif // CATEGORIA_H
