/*
Autor: Francisco Tonatihu Castro Flores A01749518
Declaracion de clase Tablero
*/
#ifndef TABLERO_H
#define TABLERO_H

#include <string>

class Tablero
{
private://Atributos
    bool indicadorPrendido;
    double indicadorVelocidad;
    double indicadorGasolina;
    bool indicadorLuces;
    bool indicadorLlantas;

public://Metodos
    Tablero();
    bool indicarPrendido() const;
    void indicarPrendido(bool prendido);
    double indicarVelocidad() const;
    void indicarVelocidad(double velocidad);
    double indicarGasolina() const;
    void indicarGasolina(double gasolina);
    bool indicarLuces() const;
    void indicarLuces(bool luces);
    bool indicarLlantas() const;
    void indicarLlantas(bool peligro);
    void mostrarTablero() const;
};

#endif
