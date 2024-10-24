// Prototipos de funciones
void MenuPrincipal();
void Login(int &tipoEmpleado);
void MenuCajero();
void MenuGerente();

int main() {
    MenuPrincipal();
    return 0;
}

void MenuPrincipal() {
    int tipoEmpleado;
    Login(tipoEmpleado);
    
    if (tipoEmpleado == 1) {
        MenuCajero();
    } else {
        MenuGerente();
    }
}

void Login(int &tipoEmpleado) {
    // Implementar lógica de autenticación y asignar tipo de empleado
    cout << "Ingrese ID: ";
    // ... lectura y validaciones
    cout << "Ingrese Contraseña: ";
    // ... lectura y validaciones
    // Simulación de login exitoso
    tipoEmpleado = 1; // 1 para Cajero, 2 para Gerente
}

void MenuCajero() {
    int opcion;
    do {
        rlutil::cls();
        cout << "Menu Cajero\n";
        cout << "1. Hacer Reserva\n";
        cout << "2. Cancelar Reserva\n";
        cout << "3. Dar de alta Cliente\n";
        cout << "4. Dar de baja Cliente\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: 
                // Lógica para hacer reserva
                break;
            case 2:
                // Lógica para cancelar reserva
                break;
            case 3:
                // Lógica para dar de alta cliente
                break;
            case 4:
                // Lógica para dar de baja cliente
                break;
        }
    } while (opcion != 5);
}

void MenuGerente() {
    int opcion;
    do {
        rlutil::cls();
        cout << "Menu Gerente\n";
        cout << "1. Últimos 15 movimientos\n";
        cout << "2. Cambiar precio\n";
        cout << "3. Clausurar lugar\n";
        cout << "4. Dar de alta un lugar\n";
        cout << "5. Dar de baja Cajero\n";
        cout << "6. Dar de alta Cajero\n";
        cout << "7. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            // Implementar lógica según opción seleccionada
            case 1: 
                // Mostrar movimientos
                break;
            case 2:
                // Cambiar precio
                break;
            // Otras opciones...
        }
    } while (opcion != 7);
}
