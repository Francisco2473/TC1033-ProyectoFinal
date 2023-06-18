/*
Autor: Francisco Tonatihu Castro Flores A0174951
Implementacion de clase Tablero
*/
#include "Tablero.h"
#include <iostream>
using namespace std;

Tablero::Tablero() : indicadorPrendido(false), indicadorVelocidad(0.0), indicadorGasolina(0.0),
                     indicadorLuces(false), indicadorLlantas(false) {}

bool Tablero::indicarPrendido() const
{
    return indicadorPrendido;
}

void Tablero::indicarPrendido(bool prendido)
{
    indicadorPrendido = prendido;
}

double Tablero::indicarVelocidad() const
{
    return indicadorVelocidad;
}

void Tablero::indicarVelocidad(double velocidad)
{
    indicadorVelocidad = velocidad;
}

double Tablero::indicarGasolina() const
{
    return indicadorGasolina;
}

void Tablero::indicarGasolina(double gasolina)
{
    indicadorGasolina = gasolina;
}

bool Tablero::indicarLuces() const
{
    return indicadorLuces;
}

void Tablero::indicarLuces(bool luces)
{
    indicadorLuces = luces;
}

bool Tablero::indicarLlantas() const
{
    return indicadorLlantas;
}

void Tablero::indicarLlantas(bool peligro)
{
    indicadorLlantas = peligro;
}

void Tablero::mostrarTablero() const
{
    string estadoAuto = indicadorPrendido ? "Encendido" : "Apagado";
    string estadoLuces = indicadorLuces ? "Prendidas" : "Apagadas";
    string estadoLlantas = indicadorLlantas ? "En peligro" : "Normales";

    cout << "Estado del auto: " << estadoAuto << endl;
    cout << "Velocidad: " << indicadorVelocidad << " km/h" << endl;
    cout << "Nivel de gasolina: " << indicadorGasolina << " litros" << endl;
    cout << "Luces: " << estadoLuces << endl;
    cout << "Llantas: " << estadoLlantas << endl;
}
