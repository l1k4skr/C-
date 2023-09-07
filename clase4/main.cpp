#include <iostream>
#include "persona.h"

using namespace std;

int main() {
    Persona *p = new Persona("Juan", 20, "Perez", "Av. Siempre Viva 123", "12345678", "prueba@test.cl");
    p->mostrar_datos();
    delete p;
    return 0;
}
