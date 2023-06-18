/*
Autor: Francisco Tonatihu Castro Flores A01749518
Declaracion de clases Luces
*/
#ifndef LUCES_H
#define LUCES_H

class Luces
{
private://Atributos
    bool estado;

public://Metodos
    Luces();
    bool indicarEstado() const;
    void prender();
    void apagar();
};

#endif
