#include <iostream>
using namespace std;

int main(){
    int entero1, entero2;
    float decimal;
    cout << "Ingrese un entero: ";
    cin >> entero1;
    
    cout << "Ingrese otro entero: ";
    cin >> entero2;
    cout << "Ingrese un decimal: ";
    cin >> decimal;
    cout << "El primer entero es: " << entero1;
    cout << "\nEl segundo entero es: " << entero2;
    cout << "\nEl decimal es: " << decimal;
    cout << "\n\nLa suma de los enteros es: " << entero1 + entero2;
    cout << "\nLa resta de los enteros es: " << entero1 - entero2;
    cout << "\nEl producto de los enteros es: " << entero1 * entero2;
    cout << "\nLa division de los enteros es: " << entero1 / entero2 << endl;
    return 0;
}