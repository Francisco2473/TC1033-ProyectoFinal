/*
Autor: Francisco Tonatihu Castro Flores A01749518
Programa de Prueba
*/
#include <iostream>
#include "Automovil.h"
using namespace std;

int main()
{
    Automovil automovil;

    int opcion;
    double litros;
    int llantaIndice;
    double presion;

    do
    {
        automovil.mostrarTablero();
        cout << "Francisco Tonatihu Castro Flores A01749518 IDM" << endl;
        cout << "---------------------------------------" << endl;
        cout << "Seleccione una opción:" << endl;

        cout << "1. Prender/Apagar el auto" << endl;

        cout << "2. Acelerar" << endl;

        cout << "3. Frenar" << endl;

        cout << "4. Prender luces" << endl;

        cout << "5. Apagar luces" << endl;

        cout << "6. Cargar gasolina" << endl;

        cout << "7. Inflar llanta" << endl;

        cout << "8. Desinflar llanta" << endl;

        cout << "9. Salir" << endl;

        cout << "Ingrese el número de la opción: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            automovil.cambiarEstado();
            break;
        case 2:
            automovil.acelerar();
            break;
        case 3:
            automovil.frenar();
            break;
        case 4:
            automovil.prenderLuces();
            break;
        case 5:
            automovil.apagarLuces();
            break;
        case 6:
            cout << "Ingrese la cantidad de litros a cargar: ";
            cin >> litros;
            automovil.cargarGasolina(litros);
            break;
        case 7:
            cout << "Ingrese el índice de la llanta (0-3): ";
            cin >> llantaIndice;
            cout << "Ingrese la nueva presión de la llanta: ";
            cin >> presion;
            automovil.inflarLlanta(llantaIndice, presion);
            break;
        case 8:
            cout << "Ingrese el índice de la llanta (0-3): ";
            cin >> llantaIndice;
            cout << "Ingrese la nueva presión de la llanta: ";
            cin >> presion;
            automovil.desinflarLlanta(llantaIndice, presion);
            break;
        case 9:
            cout << "¡Hasta luego!" << endl;
            break;
        default:
            cout << "Opción inválida. Intente nuevamente." << endl;
            break;
        }

        cout << endl;
    } while (opcion != 9);

    return 0;
}
