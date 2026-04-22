#include <iostream>
#include <random>
using namespace std;

bool a;
char ans;
int pc;
int py;


int main()
{
    cout << "Juego de dados" << endl;
    cout << "Quieres iniciar? y/n" << endl;
    cin >> ans;
    if (ans=='y')
    {
        a=true;
    }
    else if (ans=='n')
    {
        a=false;
    }
    while (a!=false)
    {
        pc = rand() % 7;

        cout << "La maquina saco un " << pc << endl;
        cout << "Sigues tu"<< endl;
        system("PAUSE");
    
        py = rand() % 7;

        if (pc<py)
        {
            cout << "Tu sacaste " << py << endl;
            cout << "Ganas esta ronda" << endl;
        }
        else if (pc==py)
        {
            cout << "Tu sacaste " << py << endl;
            cout << "Empate" << endl;
        }
        else
        {
            cout << "Tu sacaste " << py << endl;
            cout << "Pierdes esta ronda" << endl;
        }
        

        cout << "Quieres volver a jugar? y/n \n";
        cin >> ans;
        if (ans=='y')
        {
            a=true;
        }
        else if (ans=='n')
        {
            a=false;
        }
    }
    
    cout << "Hasta luego" << endl;
    system("PAUSE");

    return 0;
}