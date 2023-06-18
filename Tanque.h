/*
Autor: Francisco Tonatihu Castro Flores A01749518
Declaracion de clase Tanque
*/
#ifndef TANQUE_H
#define TANQUE_H

class Tanque
{
private://Atributos 
    double nivel;

public://Metodos
    Tanque();
    double indicarNivel() const;
    void cargar(double litros);
};

#endif
