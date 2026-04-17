#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Inicialización de la semilla para números aleatorios
    srand(static_cast<unsigned int>(time(0)));

    // Valores iniciales
    bool e = true;
    int a = 1;

    // Reinicio del juego
    while (e != false) {
        // Inicio del juego
        cout << "Adivina el numero que el programa esta pensando" << endl;
        int Limit;
        cout << "Del 1 a que numero quieres que piense la maquina?: ";
        cin >> Limit;
        int adivin = rand() % Limit + 1;
        int cont = 0;
        int num = rand() % Limit + 1;
        cout << "Este es el numero: " << adivin << endl;

        // Solución del juego
        while (adivin != num) {
            num = rand() % (Limit - a + 1) + a;

            // Lógica del programa
            if (adivin < num) {
                if (adivin < num && num < Limit) {
                    Limit = num;
                    cout << num << " Es mas pequeño" << endl;
                    cont++;
                }
            } else if (adivin > num) {
                if (a < num && num < adivin) {
                    a = num;
                    cout << num << " Es mas grande" << endl;
                    cont++;
                }
            }
        }

        // Fin del juego y reinicio
        if (adivin == num) {
            cout << "------------------------------" << endl;
            cout << "| " << num << "  le atinaste          |" << endl;
            cout << "| Lo lograste en " << cont << " intentos   |" << endl;
            cout << "------------------------------" << endl;
        }

        char x;
        cout << "quieres volver a jugar? Y/N: ";
        cin >> x;
        if (x == 'Y' || x == 'y') {
            e = true;
        } else if (x == 'N' || x == 'n') {
            e = false;
        }
    }

    // Pantalla de fin
    cout << "Gracias por jugar" << endl;
    return 0;
}