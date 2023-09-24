#include <iostream>
#include <string>
#include <vector>
#include <memory>

// Clase base Vehiculo -> Virtual pura
class Vehiculo {
protected:
    int numeroMotor, cantidadRuedas, anoFabricacion, tipoVehiculo, tipoCombustible;
    double precioBase;
public:
    // Añadir los valores por defecto directamente en la declaración del constructor.
    Vehiculo(
        int numeroMotor = 0, 
        int cantidadRuedas = 0, 
        int anoFabricacion = 0, 
        int tipoVehiculo = 0, 
        int tipoCombustible = 0, 
        double precioBase = 0.0);
    virtual ~Vehiculo() = 0;
    virtual void pedirDatos();
    virtual void mostrarDatos();
    virtual double calcularPrecio() = 0;  // Método virtual puro
};

// Clase derivada Auto
class Auto : public Vehiculo {
protected:
    std::string marca;
    double precioFinal = 0;
public:
    Auto(
        std::string marca = "",
        int numeroMotor = 0, 
        int cantidadRuedas = 0, 
        int anoFabricacion = 0, 
        int tipoVehiculo = 0, 
        int tipoCombustible = 0, 
        double precioBase = 0.0);
    ~Auto() override;
    void pedirDatos() override;
    void mostrarDatos() override;
    double calcularPrecio() override;
    
};

// Clase derivada Moto
class Moto : public Vehiculo {
protected:
    std::string marca;
    double precioFinal = 0;
public:
    Moto(
        std::string marca = "",
        int numeroMotor = 0, 
        int cantidadRuedas = 0, 
        int anoFabricacion = 0, 
        int tipoVehiculo = 0, 
        int tipoCombustible = 0, 
        double precioBase = 0.0);
    ~Moto() override;
    void pedirDatos() override;
    void mostrarDatos() override;
    double calcularPrecio() override;
    
};

// Clase derivada Camion
class Camion : public Vehiculo {
protected:
    std::string marca;
    double precioFinal = 0;
public:
    Camion(
        std::string marca = "",
        int numeroMotor = 0, 
        int cantidadRuedas = 0, 
        int anoFabricacion = 0, 
        int tipoVehiculo = 0, 
        int tipoCombustible = 0, 
        double precioBase = 0.0);
    ~Camion() override;
    void pedirDatos() override;
    void mostrarDatos() override;
    double calcularPrecio() override;
    
};

class Cliente {
protected:
    std::string nombre;
    std::string rut;
    std::vector<std::unique_ptr<Vehiculo>> vehiculos;  // Vector de punteros inteligentes

public:
    int cantidadAutos = 0;
    int cantidadMotos = 0;
    int cantidadCamiones = 0;

    Cliente(std::string, std::string);

    ~Cliente();

    void pedirDatos();

    void mostrarDatos();

    void agregarVehiculo(std::unique_ptr<Vehiculo> vehiculo) {
    if(dynamic_cast<Auto*>(vehiculo.get())) {
        cantidadAutos++;
    } else if(dynamic_cast<Moto*>(vehiculo.get())) {
        cantidadMotos++;
    } else if(dynamic_cast<Camion*>(vehiculo.get())) {
        cantidadCamiones++;
    }
    vehiculos.push_back(std::move(vehiculo));
}

    double calcularTotalVentas() const {
    double total = 0.0;
    for(const auto& vehiculoUniquePtr : vehiculos) {
        total += vehiculoUniquePtr->calcularPrecio();
    }
    return total;
}

    int cantidadVehiculos() const {
        return vehiculos.size();
    }
};

