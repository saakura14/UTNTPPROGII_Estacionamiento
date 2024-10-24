#pragma once
#include "Fecha.h"

class Reserva {
public:
    char IDReserva[15];
    char IDEmpleado[15];
    char IDCliente[15];
    int IDEstacionamiento;
    // Suponiendo una estructura para Fecha en lugar de una clase
    int DiaIngreso, MesIngreso, AnoIngreso;
    int Dias;
    float ImporteTotal;
    bool Estado;
};
