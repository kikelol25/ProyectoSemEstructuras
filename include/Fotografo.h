/*
* Nombre: Juan Jesus Gomez Barajas
* Codigo: 214519467
* Seccion: D01
*/
#ifndef FOTOGRAFO_H
#define FOTOGRAFO_H

#include <string>

class Fotografo {
public:
  Fotografo();
  ~Fotografo();
  std::string get_name() { return name; }
  std::string get_city() { return city; }
  std::string get_phone() { return phone; }
  int get_age() { return age; }
  int get_experience() { return experience; }
  void set_name(std::string val) { name = val; }
  void set_city(std::string val) { city = val; }
  void set_phone(std::string val) { phone = val; }
  void set_age(int val) { age = val; }
  void set_experience(int val) { experience = val; }

private:
  std::string name;
  std::string city;
  std::string phone;
  int age;
  int experience;
};

#endif // FOTOGRAFO_H
