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
  Obra(std::string, std::string, std::string, std::string, int, int, \
      bool, bool, bool, std::string, std::string, float);
  ~Obra();
  std::string getName() { return name; }
  std::string getCamera() { return camera; }
  std::string getLens() { return lens; }
  std::string getDiaphragm() { return diaphragm; }
  Fotografo getAuthor() { return author; }
  int getTechnique() { return technique; }
  int getShutter() { return shutter; }
  bool getLocaNeed() { return locaNeed; }
  bool getModelNeed() { return modelNeed; }
  bool getPriceNeed() { return priceNeed; }
  std::string getLocation() { return location; }
  std::string getModel() { return model; }
  float getPrice() { return price; }

  void setPriceNeed(bool val) { priceNeed = val; }
  void setName(std::string val) { name = val; }
  void setCamera(std::string val) { camera = val; }
  void setLens(std::string val) { lens = val; }
  void setDiaphragm(std::string val) { diaphragm = val; }
  void setAuthor(Fotografo val) { author = val; }
  void setTechnique(int val) { technique = val; }
  void setShutter(int val) { shutter = val; }
  void setLocaNeed(bool val) { locaNeed = val; }
  void setModelNeed(bool val) { modelNeed = val; }
  void setLocation(std::string val) { location = val; }
  void setModel(std::string val) { model = val; }
  void setPrice(float val) { price = val; }

protected:
  Fotografo author;

private:
  std::string name;
  std::string camera;
  std::string lens;
  std::string diaphragm;
  int technique;
  int shutter;
  bool locaNeed;
  bool modelNeed;
  bool priceNeed;
  std::string location;
  std::string model;
  float price;
};

#endif // OBRA_H
