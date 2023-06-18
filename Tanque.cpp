/*
Autor: Francisco Tonatihu Castro Flores  A01749518
Implementacion de clase Tanque
*/
#include "Tanque.h"

Tanque::Tanque() : nivel(0.0) {}

double Tanque::indicarNivel() const
{
    return nivel;
}

void Tanque::cargar(double litros)
{
    nivel += litros;

    if (nivel < 0.0)
    {
        nivel = 0.0;
    }

    if (nivel > 42.0)
    {
        nivel = 42.0;
    }
}
