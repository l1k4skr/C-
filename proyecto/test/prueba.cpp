#include <iostream>
using namespace std;

/*
    7.Defina una estructura que indique el tiempo empleado por un ciclista en una etapa. La estructura debe tener tres campos: horas, minutos y segundos. Escriba un programa que dado n etapas calcule el tiempo total empleado en correr todas las etapas.
*/
void getch(){
    cout << "Presione una tecla para continuar...";
    cin.get();
    cin.ignore();
}
struct Etapas
{
    int horas;
    int minutos;
    int segundos;
} etapas[3];


int main()
{
    int n_etapas;

    cout << "Digite el numero de etapas: "; cin >> n_etapas;

    for (int i = 0; i < n_etapas; i++)
    {
        cout << "\nDigite el tiempo de la etapa " << i + 1 << endl;
        cout << "Horas: "; cin >> etapas[i].horas;
        cout << "Minutos: "; cin >> etapas[i].minutos;
        cout << "Segundos: "; cin >> etapas[i].segundos;
    }

    for (int i = 0; i < n_etapas; i++)
    {
        cout << "\nTiempo de la etapa " << i + 1 << endl;
        cout << "Horas: " << etapas[i].horas << endl;
        cout << "Minutos: " << etapas[i].minutos << endl;
        cout << "Segundos: " << etapas[i].segundos << endl;        
    }
    
    
    getch(); // Pausa el programa hasta que se presione una tecla
    return 0;
}