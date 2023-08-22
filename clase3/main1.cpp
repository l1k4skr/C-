#include <iostream>
#include "fiugra.h"

int main(){
    int altura = 8; // 
    int base = 10;

    Triangulo mi_triangulo(altura, base);
    mi_triangulo.calcular_area();
    return 0;
}