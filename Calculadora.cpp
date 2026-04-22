#include <iostream>
#include <math.h>
using namespace std;


int menu;
char intento;
float rta, Num1, Num2; 
bool a = true;
bool b = true;

int main()
{
    while (a==true)
    {
        cout<<"Bienvenido a la calcuadora"<<endl;
        cout<<"Que operacion deseas realizar?"<<endl;
        cout<<"1) Suma" << endl;
        cout<<"2) Resta" << endl;
        cout<<"3) Multiplicacion" << endl;
        cout<<"4) Division" << endl;
        cout<<"5) Potenciacion" << endl;
        cout<<"6) Radicacion" << endl;
        cout<<"Selecciona una opcion colocando unicamente el numero correspondiente"<<endl;
        cin>>menu;

        if (menu == 1)
        {
            cout<<"Inserta el primer numero" << endl;
            cin>> Num1;
            cout<<"Inserta el segundo numero" << endl;
            cin>> Num2;
            rta = Num1 + Num2;
            cout<<"El resultado de "<< Num1 << "+" << Num2 << "=" << rta << endl;
            system("PAUSE");
        }

        else if (menu == 2)
        {
            cout<<"Inserta el primer numero" << endl;
            cin>> Num1;
            cout<<"Inserta el segundo numero" << endl;
            cin>> Num2;
            rta = Num1 - Num2;
            cout<<"El resultado de "<< Num1 << "-" << Num2 << "=" << rta << endl;
            system("PAUSE");
        }

        else if (menu == 3)
        {
            cout<<"Inserta el primer numero" << endl;
            cin>> Num1;
            cout<<"Inserta el segundo numero" << endl;
            cin>> Num2;
            rta = Num1 * Num2;
            cout<<"El resultado de "<< Num1 << "*" << Num2 << "=" << rta << endl;
            system("PAUSE");
        }

        else if (menu == 4)
        {
            cout<<"Inserta el primer numero" << endl;
            cin>> Num1;
            cout<<"Inserta el segundo numero" << endl;
            cin>> Num2;
            if (Num2 == 0)
            {
                cout<<"No se puede dividir entre 0"<<endl;
                system("PAUSE");
            }
            else if (Num2 != 0)
            {
                rta = Num1 / Num2;
                cout<<"El resultado de "<< Num1 << "/" << Num2 << "=" << rta << endl;
                system("PAUSE");
            }
        }

        else if (menu == 5)
        {
            cout<<"Inserta el primer numero" << endl;
            cin>> Num1;
            cout<<"Inserta el segundo numero" << endl;
            cin>> Num2;
            rta = pow(Num1,Num2);
            cout<<"El resultado de "<< Num1 << "^" << Num2 << "=" << rta << endl;
            system("PAUSE");
        }

        else if (menu == 6)
        {
            cout<<"Inserta el primer numero" << endl;
            cin>> Num1;
            cout<<"Inserta el segundo numero" << endl;
            cin>> Num2;
            if (Num2 == 0)
            {
                cout<<"No existe raiz con indice 0"<<endl;
                system("PAUSE");
            }
            else if (Num2 !=0)
            {
                rta = pow(Num1,(1/Num2));
                cout<<"El resultado de "<< Num2 << "√" << Num1 << "=" << rta << endl;
                system("PAUSE");
            }
        }

        else
        {
            cout<<"Esa opcion no existe"<<endl;
            system("PAUSE");
        }

        while (b==true)
        {
            cout<<"Te gustaria operar nuevamente? (Y/N)"<<endl;
            cin>> intento;

            if (intento=='Y'|| intento=='y')
            {
                cout<<"Ok, Vuelve a operar";
                a=true;
                b=false;
            }

            else if (intento =='N'|| intento =='n')
            {
                cout<<"Hasta luego...";
                a=false;
                b=false;
            }

            else
            {
                cout<<"Opcion No Valida";
                b=true;
            }
        }      
    }
    return 0;
}
