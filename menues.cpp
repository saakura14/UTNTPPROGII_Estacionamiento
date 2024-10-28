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
    
    if (Login()== 1) {
        MenuCajero();
    } else if(Login()==2){
        MenuGerente();
    } else{
        cout << "Usuario no encontrado";
    }
}

int Login() {
    // Implementar lógica de autenticación y asignar tipo de empleado
    
    cout << "Ingrese ID: ";
    // INGRESO ID
    cout << "Ingrese Contraseña: ";
    // INGRESO PASS
    
    //LEER ARCHIVO EMPLEADOS && ESTADO==TRUE
    // DEVUELVE EL TIPO
    // 1 para Cajero, 2 para Gerente
    return empleado.getJerarquia();
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





---------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// Estructura para representar un empleado
struct Empleado {
    string id;
    string password;
    int tipo; // 1 para Cajero, 2 para Gerente
    bool estado; // True si el empleado está activo
};

// Prototipos de funciones
void MenuPrincipal();
int Login(int &tipoEmpleado);
void MenuCajero();
void MenuGerente();
vector<Empleado> CargarEmpleados();

int main() {
    MenuPrincipal();
    return 0;
}

void MenuPrincipal() {
    int tipoEmpleado;
    if (Login(tipoEmpleado) == 1) {
        MenuCajero();
    } else if (tipoEmpleado == 2) {
        MenuGerente();
    } else {
        cout << "Usuario no encontrado o inactivo." << endl;
    }
}

int Login(int &tipoEmpleado) {
    string id, password;
    cout << "Ingrese ID: ";
    cin >> id;
    cout << "Ingrese Contraseña: ";
    cin >> password;

    vector<Empleado> empleados = CargarEmpleados();

    for (const auto& empleado : empleados) {
        if (empleado.id == id && empleado.password == password && empleado.estado) {
            tipoEmpleado = empleado.tipo;
            return 1; // Autenticación exitosa
        }
    }
    return 0; // Autenticación fallida
}

vector<Empleado> CargarEmpleados() {
    vector<Empleado> empleados;
    ifstream inFile("empleados.txt");
    if (!inFile) {
        cout << "Error al abrir el archivo de empleados." << endl;
        return empleados;
    }

    Empleado emp;
    while (inFile >> emp.id >> emp.password >> emp.tipo >> emp.estado) {
        empleados.push_back(emp);
    }
    inFile.close();
    return empleados;
}

void MenuCajero() {
    int opcion;
    do {
        cout << "\nMenu Cajero\n";
        cout << "1. Hacer Reserva\n";
        cout << "2. Cancelar Reserva\n";
        cout << "3. Dar de alta Cliente\n";
        cout << "4. Dar de baja Cliente\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                // Lógica para hacer una reserva
                cout << "Haciendo reserva..." << endl;
                break;
            case 2:
                // Lógica para cancelar reserva
                cout << "Cancelando reserva..." << endl;
                break;
            case 3:
                // Lógica para dar de alta cliente
                cout << "Dando de alta cliente..." << endl;
                break;
            case 4:
                // Lógica para dar de baja cliente
                cout << "Dando de baja cliente..." << endl;
                break;
        }
    } while (opcion != 5);
}

void MenuGerente() {
    int opcion;
    do {
        cout << "\nMenu Gerente\n";
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
            case 1:
                // Mostrar últimos 15 movimientos
                cout << "Mostrando últimos 15 movimientos..." << endl;
                break;
            case 2:
                // Cambiar precio
                cout << "Cambiando precio..." << endl;
                break;
            case 3:
                // Clausurar lugar
                cout << "Clausurando lugar..." << endl;
                break;
            case 4:
                // Dar de alta un lugar
                cout << "Dando de alta un lugar..." << endl;
                break;
            case 5:
                // Dar de baja Cajero
                cout << "Dando de baja a Cajero..." << endl;
                break;
            case 6:
                // Dar de alta Cajero
                cout << "Dando de alta a Cajero..." << endl;
                break;
        }
    } while (opcion != 7);
}
