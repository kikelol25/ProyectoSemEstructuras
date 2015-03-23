/*
* Nombre: Juan Jesus Gomez Barajas
* Codigo: 214519467
* Seccion: D01
*/
#include "Obra.h"

Obra::Obra()
{
    name      = "";
    locaNeed  = false;
    modelNeed = false;
    priceNeed = false;
}

Obra::Obra(string name, string camera, string lens, string diaphragm, \
          int technique, int shutter, bool locaNeed, bool modelNeed, \
          bool priceNeed, string location, string model, float price)
{
  this->name = name;
  this->camera = camera;
  this->lens = lens;
  this->diaphragm = diaphragm;
  this->technique = technique;
  this->shutter = shutter;
  this->locaNeed = locaNeed;
  this->modelNeed = modelNeed;
  this->priceNeed = priceNeed;
  this->location = location;
  this->model = model;
  this->price = price;
}

Obra::~Obra()
{
    //dtor
}
