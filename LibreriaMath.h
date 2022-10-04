#include <iostream>

using namespace std;
class Matriz {
private:
    int nfilas, ncolumnas, ** punteroMatriz1, ** punteroMatriz2;
public:
    void pedirDatos() {
        cout << "Digite el numero de filas de la matriz" << endl;
        cin >> nfilas;
        cout << "Digite el numero de columnas de la matriz" << endl;
        cin >> ncolumnas;
        punteroMatriz1 = new int* [nfilas];
        for (int i = 0; i < nfilas;i++) {
            punteroMatriz1[i] = new int[ncolumnas];
        }
        cout << "\nDigite los elementos de la primera matriz" << endl;
        for (int i = 0; i < nfilas;i++) {
            for (int j = 0; j < ncolumnas;j++) {
                cout << "Digite un numero [" << i << "][" << j << "]: ";
                cin >> *(*(punteroMatriz1 + i) + j);
            }
        }
        punteroMatriz2 = new int* [nfilas];
        for (int i = 0; i < nfilas;i++) {
            punteroMatriz2[i] = new int[ncolumnas];
        }
        cout << "\nDigite los elementos de la segunda matriz" << endl;
        for (int i = 0; i < nfilas;i++) {
            for (int j = 0; j < ncolumnas;j++) {
                cout << "Digite un numero [" << i << "][" << j << "]: ";
                cin >> *(*(punteroMatriz2 + i) + j);
            }
        }
    }
    void multiplicarMatrices() {


    }
};

class Menu
{
private:
    int opc;

public:
    Menu() {
        opc = 0;
    }
    void run() {

        do {
            cout << "Bienvenido" << endl;
            cout << "Escoga una opcion\n1.Multiplicacion de matrices\n2.Calcular el coseno\n3.Calcular el seno\n4.Calcular la tangente" << endl;
            cin >> opc;
            Matriz matriz;
            matriz.pedirDatos();
            system("pause");
            system("cls");
            cout << "Quiere repetir el programa?\n1.Si\n2.No y salir del programa" << endl;
            system("pause");
            cin >> opc;
            system("cls");
        } while (opc != 2);
    }


};
