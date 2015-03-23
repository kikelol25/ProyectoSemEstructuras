/*
* Nombre: Juan Jesus Gomez Barajas
* Codigo: 214519467
* Seccion: D01
*/

#ifdef _WIN32
#define LIMPIAR "cls"
#else
#define LIMPIAR "clear"
#endif // _WIN32

#include <iostream>

#include "include/Fotografo.h"
#include "include/Obra.h"
#include "include/Categoria.h"
#include "include/Node.h"
#include "include/ListF.h"
#include "include/ListO.h"

using namespace std;

int menuPrincipal();
void menuFotografos();
void menuObras();
void opcionInvalida();
void pausar();

int main() {
  bool continuar = true;
  do {
    switch(menuPrincipal()){
      case 1:
        menuFotografos();
        break;

      case 2:
        menuObras();
        break;

      case 3:
        continuar = false;
        break;

      default:
        opcionInvalida();
    }
  } while (continuar);

  return 0;
}

int menuPrincipal() {
  int opc;
  system(LIMPIAR);

  cout << "\t\t Galeria" << endl << endl;
  cout << "1.- Fotografos" << endl;
  cout << "2.- Obras" << endl;
  cout << "3.- Salir" << endl;
  cout << "Ingrese la opcion deseada" << endl;
  cin >> opc;
  if (opc >= 1 and opc <= 3)
  {
    system(LIMPIAR);
  }

  return opc;
}

void menuFotografos() {
  int opc;
  cout << "\t\t Fotografos" << endl << endl;
  cout << "1.- Crear fotografo" << endl;
  cout << "2.- Mostrar Fotografos" << endl;
  cout << "3.- Buscar fotografo" << endl;
  cout << "4.- Eliminar fotografo" << endl;
  cout << "5.- Eliminar todos los fotografos" << endl;
  cout << "6.- Regresar" << endl;
  cout <<  "Ingrese la opcion deseada" << endl;
  cin >> opc;
}

void menuObras() {
  int opc;
  cout << "\t\t Obras" << endl << endl;
  cout << "1.- Crear obra" << endl;
  cout << "2.- Mostrar obras" << endl;
  cout << "3.- Buscar obra" << endl;
  cout << "4.- Eliminar obra" << endl;
  cout << "5.- Regresar" << endl;
  cout <<  "Ingrese la opcion deseada" << endl;
  cin >> opc;
}

void pausar() {
  cin.get();
  cout << "Presione una telca para continuar...";
  cin.get();
}

void opcionInvalida(){
  cout << "Opcion Invalida" << endl;
  pausar();
}