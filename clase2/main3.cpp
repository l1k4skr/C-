#include <iostream>
using namespace std;

int main(){
    int entero1;
    cout << "Ingrese un entero para calcular su tabla: ";
    cin >> entero1;
    int counter = 1;
    while(counter <= 10){
        cout << "Tabla del "<< counter<< "\n";
        cout << entero1 << " x " << counter << " = ";
        cout << entero1*counter << "\n";
        counter++;
    }
    cout << endl;
    return 0;
}