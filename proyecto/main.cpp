#include <iostream>
#include "clases.h"
#include <limits>
#include <vector>
#include <memory>

using namespace std;

int menu() {
    int eleccion = 0;
    const string errorMsg = "Error: debes ingresar un número válido.";

    while (true) {
        cout << "1. Venta de Vehículos a clientes" << endl
             << "2. Promedio de ventas." << endl
             << "3. Cantidad de vehículos comprados" << endl
             << "4. Ventas de vehículos" << endl
             << "5. Salir" << endl
             << "Ingrese Opción: ";

        cin >> eleccion;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << errorMsg << endl;
            continue;
        }

        if (eleccion >= 1 && eleccion <= 5) return eleccion;

        cout << "La elección debe ser entre 1 y 5" << endl;
    }
}

std::unique_ptr<Vehiculo> seleccionarVehiculo() {
    cout << "¿Qué tipo de vehículo desea comprar?" << endl;
    cout << "1. Auto" << endl
         << "2. Moto" << endl
         << "3. Camión" << endl;

    int opcionVehiculo;
    cin >> opcionVehiculo;

    switch (opcionVehiculo) {
        case 1: return std::make_unique<Auto>();
        case 2: return std::make_unique<Moto>();
        case 3: return std::make_unique<Camion>();
        default: 
            cout << "Opción inválida" << endl;
            return nullptr;
    }
}

int main() {
    vector<unique_ptr<Cliente>> clientes;

    int opcion;
    do {
        opcion = menu();
        cout << "Has elegido la opción " << opcion << endl;

        switch (opcion) {
            case 1: {
                string nombre, rut;
                cout << "-- Venta de Vehículos a clientes --" << endl;
                cout << "Ingrese el nombre del cliente: ";
                cin.ignore();
                getline(cin, nombre);
                cout << "Ingrese el RUT del cliente: ";
                cin >> rut;

                auto cliente = make_unique<Cliente>(nombre, rut);
                cliente->mostrarDatos();

                auto vehiculo = seleccionarVehiculo();
                if (vehiculo) {
                    vehiculo->pedirDatos();
                    cliente->agregarVehiculo(move(vehiculo));
                    clientes.push_back(move(cliente));
                }
                break;
            }
            case 2: {
                double totalVentas = 0;
                for (const auto& cliente : clientes) {
                    totalVentas += cliente->calcularTotalVentas();
                }
                cout << "Promedio de ventas: " << (clientes.empty() ? 0 : totalVentas / clientes.size()) << endl;
                break;
            }
            case 3: {
                int totalVehiculos = 0;
                for (const auto& cliente : clientes) {
                    totalVehiculos += cliente->cantidadVehiculos();
                }
                cout << "Cantidad total de vehículos comprados: " << totalVehiculos << endl;
                break;
            }
            case 4: {
                double totalVentas = 0;
                for (const auto& cliente : clientes) {
                    totalVentas += cliente->calcularTotalVentas();
                }
                cout << "Total de ventas de vehículos: " << totalVentas << endl;
                break;
            }
            case 5:
                cout << "--- ¡Gracias por utilizar el sistema! ---" << endl;
                break;
        }
    } while (opcion != 5);

    return 0;
}

