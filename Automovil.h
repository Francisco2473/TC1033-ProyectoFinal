/*
Autor: Francisco Tonatihu Castro Flores A01749518
Declaracion de clase Automovil
*/
#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H

#include "Tablero.h"
#include "Tanque.h"
#include "Luces.h"
#include "Llantas.h"

class Automovil
{
private://Aributos
    Tablero tablero;
    Tanque tanqueGasolina;
    Luces luces;
    Llantas llantas[4];
    double velocidad;

public://Metodos 
    Automovil();
    void cambiarEstado();
    void acelerar();
    void frenar();
    void prenderLuces();
    void apagarLuces();
    void cargarGasolina(double litros);
    void inflarLlanta(int llantaIndice, double presion);
    void desinflarLlanta(int llantaIndice, double presion);
    void mostrarTablero();
};

#endif