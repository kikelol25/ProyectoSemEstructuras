/*
* Nombre: Juan Jesus Gomez Barajas
* Codigo: 214519467
* Seccion: D01
*/
#include "Fotografo.h"
#include <string>

using namespace std;

Fotografo::Fotografo()
{
	name  = "";
	city  = "";
	phone = "";
	age = 0;
	experience = 0;
}

Fotografo::Fotografo(string name, string city, string phone, \
                    int age, int experience) {
  this->name = name;
  this->city = city;
  this->phone = phone;
  this->age = age;
  this->experience = experience;
}

Fotografo::~Fotografo()
{

}
