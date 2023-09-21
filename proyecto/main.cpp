#include <iostream>
#include "clases.h"
using namespace std;

int menu (){
  int eleccion = 0; 
  string except = "Error debes ingresar un numero.";
  
  while (eleccion < 0 | eleccion > 5)
  {
      cout << "1.    Venta de Vehículos a clientes\n2.    Promedio de ventas.\n3.    Cantidad de vehículos comprados\n4.    Ventas de vehículos\n5.    Salir" << endl;
      cout << "Ingrese Opción: " << endl; 
      try {
        if (eleccion == 0)
        {
          cin >> eleccion;
        }
      } catch (string except){
      cout << except << "La eleccion no es valida" << eleccion << endl;
      }
    
    if (eleccion > 0 & eleccion< 6 ) {
      return eleccion;  
    }else{
      cout << "La elecion debe ser entre 1 y 5" << endl; 
    }
}
}
int main() {
  menu();

  return 0;
};