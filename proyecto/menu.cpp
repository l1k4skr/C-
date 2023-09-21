# include <iostream>

using namespace std;

int menu1(){
    int eleccion;
    while ((eleccion < 1 | eleccion > 5)()){
        cout << "1. Venta de Vehículos a clientes\n2. Promedio de ventas.\n3. Cantidad de vehículos comprados\n4. Ventas de vehículos\n5. Salir" << endl;
        cout << "Ingrese Opción: " << endl;
        cin >> eleccion;
        switch (eleccion)
        {
        case 1:
            cout << "Venta de Vehículos a clientes" << endl;
            return 1;
        case 2:
            cout << "Promedio de ventas." << endl;
            return 2;
        case 3:
            cout << "Cantidad de vehículos comprados" << endl;
            return 3;
        case 4:
            cout << "Ventas de vehículos" << endl;
            return 4;
        case 5:
            cout << "Salir" << endl;
            return 5;
        default:
            cout << "La eleccion debe ser entre 1 y 5" << endl;
            
    }
    }
}

int main(){
    int eleccion = menu1();
}