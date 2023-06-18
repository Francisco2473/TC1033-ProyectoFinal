/*
Autor: Francisco Tonatihu Castro Flores A01749518
Implementacion de clases Luces
*/
#include "Luces.h"

Luces::Luces() : estado(false) {}

bool Luces::indicarEstado() const
{
    return estado;
}

void Luces::prender()
{
    estado = true;
}

void Luces::apagar()
{
    estado = false;
}
