/*
Autor: Francisco Tonatihu Castro Flores  A01749518
Implementacion de clase Llantas
*/
#include "Llantas.h"

Llantas::Llantas() : presion(33) {}

double Llantas::indicarPresion() const
{
    return presion;
}

void Llantas::setPresion(double presion)
{
    this->presion = presion;
}

bool Llantas::indicarPeligro() const
{
    return presion < 26.4 || presion > 39.6;
}
