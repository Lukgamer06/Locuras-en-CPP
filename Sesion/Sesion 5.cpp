#include <iostream>
#include <wchar.h>
#include <cstdlib>

using namespace std;

int opcion;
long rta;

//Funcion para limpiar terminal
void clearScreen() {
    #ifdef _WIN32
        system("cls");  // Comando para Windows
    #elif __linux__
        system("clear");  // Comando para Linux
    #else
        cout << "Sistema operativo no compatible para limpiar la pantalla." << endl;
    #endif
}

int Combinacion(int n,int r){
    int factorial_n=1;
    int factorial_nr=1;
    int factorial_r=1;
    //Calcular n!
    for (int i = 1; i <= n+1; i++)
    {
        factorial_n *=i;
    }
    //Calcular r!
    for (int i = 1; i <= r+1; i++)
    {
        factorial_r *=i;
    }
    //Calcular (n-r)!
    for (int i = 1; i <= (n-r)+1; i++)
    {
        factorial_nr *=i;
    }
    return factorial_n / (factorial_r * factorial_nr);
}

int Permutacion(int n, int r) {
    int factorial_n = 1;
    int factorial_nr = 1;
    
    // Calcular n!
    for (int i = 1; i <= n; i++) {
        factorial_n *= i;
    }
    
    // Calcular (n-r)!
    for (int i = 1; i <= (n - r); i++) {
        factorial_nr *= i;
    }
    
    return factorial_n / factorial_nr;
}


int main()
{
    do
    {
        //Menu
        cout<<"Bienvenido"<<endl;
        cout<<"Que Ejercicio del taller quieres ver?"<<endl;
        cout<<"1. Ejercicio 1"<<endl;
        cout<<"2. Ejercicio 2"<<endl;
        cout<<"3. Salir"<<endl;
        cin>>opcion;
        clearScreen();
        switch(opcion)
        {
            case 1:
            {
                //Ejercicio 1
                cout<<"Ayer deje mi telefono celular olvidado en el autobus, por lo que lo reemplace rapidamente por un telefono con menor capacidad de memoria. En mi telefono anterior tenia instaladas 20 aplicaciones y ahora solamente puedo seleccionar 8"<<endl;
                
                cout<<"a) De cuantas formas puedo realizar esta seleccion?"<<endl;
                cout<<"Rta: "<<Combinacion(20,8)<<endl;

                cout<<"b) Si deseo mantener instaladas 3 de las 6 aplicaciones de redes sociales que tenia y otras 5 aplicaciones de las 14 restantes, de cuantas formas puedo seleccionar ahora?"<<endl;
                cout<<"Rta: "<<Combinacion(6,3)*Combinacion(14,5)<<endl;
                system("PAUSE");
                break;
            }
            case 2:
            {
                //Ejercicio 2
                cout<<"Una baraja comun de 52 cartas consiste en cuatro palos (treboles, diamantes, corazones y espadas) con 13 denominaciones cada uno (as, de 2 a 10, jack [J], reina [Q] y rey [K])."<<endl;
                
                cout<<"a) Cuantas manos de poquer (sin ordenar) de cinco cartas, seleccionadas de una baraja comun de 52 cartas, existen?"<<endl;
                cout<<"Rta: "<</*Combinacion(52,5)*/ 2598960<<endl;

                cout<<"b) Cuantas manos de poquer contienen cartas todas del mismo palo?"<<endl;
                cout<<"Rta: " << Combinacion(13,5)<<endl; 

                cout<<"c) Cuantas manos de poquer contienen tres cartas de una denominacion y dos de una segunda denominacion?"<<endl;
                cout<<"Rta: "<<Combinacion(13,1)*Combinacion(4,3)*Combinacion(12,1)*Combinacion(4,2)<<endl;
                system("PAUSE");
                break;
            }
        } 
        if (opcion==3)
        {
            cout<<"Gracias por utilizar el programa"<<endl;
            system("PAUSE");
            break;
        }
    }while (true);
    return 0;
    }
