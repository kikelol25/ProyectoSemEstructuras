/*
* Nombre: Juan Jesus Gomez Barajas
* Codigo: 214519467
* Seccion: D01
*/
#ifndef OBRA_H
#define OBRA_H

#include <string>

class Obra {
public:
  Obra();
  ~Obra();
  std::string get_name() { return name; }
  std::string get_camera() { return camera; }
  std::string get_lens() { return lens; }
  std::string get_diaphragm() { return diaphragm; }
  Fotografo get_author() { return author; }
  int get_technique() { return technique; }
  int get_shutter() { return shutter; }
  bool get_loca_need() { return loca_need; }
  bool get_model_need() { return model_need; }
  bool get_price_need() { return price_need; }
  std::string get_location() { return location; }
  std::string get_model() { return model; }
  float get_price() { return price; }

  void set_price_need(bool val) { price_need = val; }
  void set_name(std::string val) { name = val; }
  void set_camera(std::string val) { camera = val; }
  void set_lens(std::string val) { lens = val; }
  void set_diaphragm(std::string val) { diaphragm = val; }
  void set_author(Fotografo val) { author = val; }
  void set_technique(int val) { technique = val; }
  void set_shutter(int val) { shutter = val; }
  void set_loca_need(bool val) { loca_need = val; }
  void set_model_need(bool val) { model_need = val; }
  void set_location(std::string val) { location = val; }
  void set_model(std::string val) { model = val; }
  void set_price(float val) { price = val; }

protected:
  Fotografo author;

private:
  std::string name;
  std::string camera;
  std::string lens;
  std::string diaphragm;
  int technique;
  int shutter;
  bool loca_need;
  bool model_need;
  bool price_need;
  std::string location;
  std::string model;
  float price;
};

#endif // OBRA_H
