/*
Autor: Francisco Tonatihu Castro Flores A01749518
Implementacion de clase Automovil
*/
#include "Automovil.h"
#include <iostream>
using namespace std;

Automovil::Automovil() : velocidad(0.0)
{
}

void Automovil::cambiarEstado()
{
    tablero.indicarPrendido(!tablero.indicarPrendido());
}

void Automovil::acelerar()
{
    if (!tablero.indicarPrendido())
    {
        cout << "El automóvil está apagado. No se puede acelerar." << endl;
        return;
    }

    if (tanqueGasolina.indicarNivel() <= 0.0)
    {
        cout << "El tanque de gasolina está vacío. No se puede acelerar." << endl;
        return;
    }

    if (velocidad >= 230.0)
    {
        cout << "El automóvil ha alcanzado la velocidad máxima de 230 km/h. No se puede acelerar más." << endl;
        return;
    }

    velocidad += 15.0;
    tanqueGasolina.cargar(-0.005 * velocidad);

    if (velocidad > 160.0)
    {
        tablero.indicarVelocidad(velocidad);
        cout << "Peligro, la velocidad es mayor a 160 km/h" << endl;
    }
}

void Automovil::frenar()
{
    if (!tablero.indicarPrendido())
    {
        cout << "El automóvil está apagado. No se puede frenar." << endl;
        return;
    }

    velocidad -= 25.0;

    if (velocidad < 0.0)
    {
        velocidad = 0.0;
    }

    if (velocidad <= 160.0)
    {
        tablero.indicarVelocidad(velocidad);
        // tablero.indicarLlantas(false);
    }
}

void Automovil::prenderLuces()
{
    if (!tablero.indicarPrendido())
    {
        cout << "El automóvil está apagado. No se pueden prender las luces." << endl;
        return;
    }

    luces.prender();
    tablero.indicarLuces(true);
}

void Automovil::apagarLuces()
{
    luces.apagar();
    tablero.indicarLuces(false);
}

void Automovil::cargarGasolina(double litros)
{
    if (litros <= 0.0)
    {
        cout << "La cantidad de litros a cargar es inválida. Debe ser mayor que cero." << endl;
        return;
    }

    if (tanqueGasolina.indicarNivel() >= 42.0)
    {
        cout << "El tanque de gasolina ya está lleno. No es necesario cargar más." << endl;
        return;
    }

    if (tanqueGasolina.indicarNivel() + litros > 42.0)
    {
        cout << "El tanque de gasolina solo puede contener hasta 42 litros. No se pueden cargar más litros." << endl;
        return;
    }

    if (tanqueGasolina.indicarNivel() < 6.3)
    {
        cout << "Nivel de gasolina bajo. Se recomienda llenar el tanque" << endl;
    }

    tanqueGasolina.cargar(litros);
}

void Automovil::inflarLlanta(int llantaIndice, double presion)
{
    if (llantaIndice < 0 || llantaIndice >= 4)
    {
        cout << "Índice de llanta inválido." << endl;
        return;
    }

    if (presion <= 0.0)
    {
        cout << "La presión de la llanta debe ser mayor que cero." << endl;
        return;
    }

    llantas[llantaIndice].setPresion(presion);
    tablero.indicarLlantas(llantas[llantaIndice].indicarPeligro());
}

void Automovil::desinflarLlanta(int llantaIndice, double presion)
{
    if (llantaIndice < 0 || llantaIndice >= 4)
    {
        cout << "Índice de llanta inválido." << endl;
        return;
    }

    if (presion <= 0.0)
    {
        cout << "La presión de la llanta debe ser mayor que cero." << endl;
        return;
    }

    llantas[llantaIndice].setPresion(presion);
    tablero.indicarLlantas(llantas[llantaIndice].indicarPeligro());
}

void Automovil::mostrarTablero()
{
    cout << "Estado del auto: " << (tablero.indicarPrendido() ? "Encendido" : "Apagado") << endl; // Realizamos una operacion ternaria para saber si esta prendido o apagado
    cout << "Velocidad: " << velocidad << " km/h" << endl;
    cout << "Nivel de gasolina: " << tanqueGasolina.indicarNivel()  << "L" << endl;
    cout << "Luces: " << (luces.indicarEstado() ? "Prendidas" : "Apagadas") << endl;
    cout << "Estado de las llantas: ";
    for (int i = 0; i < 4; i++)
    {
        cout << (llantas[i].indicarPeligro() ? "Peligro" : "N") << " ";
    }
    cout << endl;
}
