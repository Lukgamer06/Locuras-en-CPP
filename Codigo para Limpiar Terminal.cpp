#include <iostream>
#include <cstdlib>  // Para system()

using namespace std;

// Función para limpiar la pantalla según el sistema operativo
void clearScreen() {
    #ifdef _WIN32
        system("cls");  // Comando para Windows
    #elif __linux__
        system("clear");  // Comando para Linux
    #else
        cout << "Sistema operativo no compatible para limpiar la pantalla." << endl;
    #endif
}

int main() {
    // Ejemplo de uso
    cout << "Presiona Enter para limpiar la pantalla..." << endl;
    cin.get();  // Espera a que el usuario presione Enter
    clearScreen();   // Llama a la función para limpiar la pantalla
    cout << "La pantalla ha sido limpiada." << endl;

    return 0;
}