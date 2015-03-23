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
  Fotografo(std::string, std::string, std::string, int, int);
  ~Fotografo();
  std::string getName() { return name; }
  std::string getCity() { return city; }
  std::string getPhone() { return phone; }
  int getAge() { return age; }
  int getExperience() { return experience; }
  void setName(std::string val) { name = val; }
  void setCity(std::string val) { city = val; }
  void setPhone(std::string val) { phone = val; }
  void setAge(int val) { age = val; }
  void setExperience(int val) { experience = val; }

private:
  std::string name;
  std::string city;
  std::string phone;
  int age;
  int experience;
};

#endif // FOTOGRAFO_H
