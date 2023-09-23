#include <iostream>
#include <string>

// Clase base Vehiculo -> Virtual pura
class Vehiculo {
protected:
    int numeroMotor, cantidadRuedas, anoFabricacion, tipoVehiculo, tipoCombustible;
    double precioBase;
public:
    Vehiculo(int numeroMotor, int cantidadRuedas, int anoFabricacion, int tipoVehiculo, int tipoCombustible, double precioBase);
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
    Auto(std::string marca, int numeroMotor, int cantidadRuedas, int anoFabricacion, int tipoVehiculo, int tipoCombustible, double precioBase);
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
    Moto(std::string marca, int numeroMotor, int cantidadRuedas, int anoFabricacion, int tipoVehiculo, int tipoCombustible, double precioBase);
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
    Camion(std::string marca, int numeroMotor, int cantidadRuedas, int anoFabricacion, int tipoVehiculo, int tipoCombustible, double precioBase);
    ~Camion() override;
    void pedirDatos() override;
    void mostrarDatos() override;
    double calcularPrecio() override;
    
};

// Clase Cliente
class Cliente {
protected:
    std::string nombre;
    std::string rut;

public:
    int cantidadAutos = 0;
    int cantidadMotos = 0;
    int cantidadCamiones = 0;
    Cliente(std::string nombre, std::string rut);
    ~Cliente();
    void pedirDatos();
    void mostrarDatos();
};
