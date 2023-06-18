/*
Autor: Francisco Tonatihu Castro Flores  A01749518
Declaracion de clase llantas
*/
#ifndef LLANTAS_H
#define LLANTAS_H

class Llantas
{
private://Atributos
    double presion;

public://Metodos
    Llantas();
    double indicarPresion() const;
    void setPresion(double presion);
    bool indicarPeligro() const;
};

#endif
