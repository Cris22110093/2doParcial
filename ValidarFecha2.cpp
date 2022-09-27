#include <iostream>
#include <sstream>
using namespace std;
class FechaVal
{
private:
    int dia, mes, year;
public:

    FechaVal(char fecha[12]) {

        char* obtener = strtok(fecha, "/");
        year = stoi(obtener);
        obtener = strtok(NULL, "/");
        mes = stoi(obtener);
        obtener = strtok(NULL, "/");
        dia = stoi(obtener);
    }
    void validarDia() {
        if (dia < 1) {
            cout << "Este dia es invalido" << endl;
        }
        else if (mes != 2) {
            if (dia > 30) {
                cout << "Este dia es invalido" << endl;
            }
            else {
                cout << "Dia: " << dia << endl;
            }
        }
        else {
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
                if (dia > 29)
                {
                    cout << "Este dia es invalido" << endl;
                }
                else {
                    cout << "Dia: " << dia << endl;
                }
            }
            else {
                if (dia > 28) {
                    cout << "Este dia es invalido" << endl;
                }
                else {
                    cout << "Dia: " << dia << endl;
                }
            }

        }
    }
    void validarMes() {
        if (mes < 1 || mes>12)
        {
            cout << "Este mes es invalido" << endl;
        }
        else
        {
            cout << "Mes: " << mes << endl;
        }

    }
    void validarYear() {
        if (year < 1500 || year>2022) {
            cout << "Año invalido" << endl;
        }
        else {
            cout << "Año: " << year << endl;
        }
    }


};
class Menu
{
private:
    int i, opc;
    char fecha[12];

public:
    Menu() {
        i = 0;
        opc = 0;
    }
    void run() {

        do {
            cout << "Bienvenido" << endl;
            cout << "Ingrese una fecha en el formato YYYY/MM/DD" << endl;
            cin >> fecha;
            FechaVal* fechaVal;
            fechaVal = new FechaVal(fecha);
            fechaVal->validarDia();
            fechaVal->validarMes();
            fechaVal->validarYear();
            system("pause");
            cout << "Quiere ingresar otra fecha?\n1.Si\n2.No y salir del programa" << endl;
            system("cls");
            cin >> opc;
        } while (opc != 2);
    }


};
int main() {
    Menu menu;
    menu.run();

}
