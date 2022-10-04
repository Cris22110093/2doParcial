#include <iostream>
using namespace std;

class Matriz {
private:
    int A[100][100], B[100][100], C[100][100];
    int nfilas, nfilas2, ncolumnas, ncolumnas2;
public:
  
    void multiplicarMatrices() {
        cout << "Digite el numero de filas para la 1era matriz" << endl;
        cin >> nfilas;
        cout << "Digite el numero de columnas de la 1era matriz" << endl;
        cin >> ncolumnas;
        cout << "Digite el numero de filas para la 2da matriz" << endl;
        cin >> nfilas2;
        cout << "Digite el numero de columnas de la 2da matriz" << endl;
        cin >> ncolumnas2;
        cout << endl;
        if (ncolumnas == nfilas2) {
            for (int i = 0; i < nfilas;i++) 
                for (int j = 0; j < ncolumnas;j++) {
                    cout << "Ingresa los valores (" << i << "," << j << ") de la 1era matriz\n";
                    cin >> A[i][j];
                } 
            cout << endl;
            for (int i = 0; i < nfilas2;i++)
                for (int j = 0; j < ncolumnas2;j++) {
                    cout << "Ingresa los valores (" << i << "," << j << ") de la 2da matriz\n";
                    cin >> B[i][j];
                }
            //Se imprimen las matrices
            cout << endl;
            cout << "1era Matriz" << endl;
            for (int i = 0; i < nfilas;i++) {
                for (int j = 0; j < ncolumnas;j++) {
                
                    cout << A[i][j] << "\t";
                }
                cout << endl;
            }
            cout << endl;
            cout << "2da Matriz" << endl;
            for (int i = 0; i < nfilas2;i++) {
                for (int j = 0; j < ncolumnas2;j++) {
                 
                    cout << B[i][j] << "\t";
                }
                cout << endl;
            }
            for (int i = 0; i < nfilas;i++)
                for (int j = 0; j < ncolumnas2;j++)
                    C[i][j]=0;
            for (int i = 0; i < nfilas;i++)
                for (int j = 0; j < ncolumnas2;j++)
                    for (int z = 0; z < ncolumnas;z++)
                        C[i][j] = C[i][j] + A[i][z] * B[z][j];
            cout << endl;
            //Matriz resultante
            cout << "Matriz Resultante" << endl;
            for (int i = 0;i < nfilas;i++) {
                for (int j = 0;j < ncolumnas2;j++) {
                    
                    cout << C[i][j] << "\t";
                }
                cout << endl;
            }

        }
        else
            cout << "No se puede multiplicar las matrices" << endl;
    }
  
};

class Funciones {
private:
    double grados, gradosc;
    long double temporal;
    long double resultado;
    long double seno;
    long double coseno;
    long double tang;
    
public:
    Funciones() {
        grados = 0;
        temporal = 0;
        resultado = 0;
        tang = 0;
        seno = 0;
        coseno = 0;
    }
    void sen();
    void cos();
    void tan();
};
void Funciones::sen() {
    cout << "Digite el angulo que se quiera calcular" << endl;
    cin >> grados;
    temporal = ((4 * grados * (180 - grados)));
    seno = temporal / (40500 - (grados * (180 - grados)));
    cout << "El Seno del angulo: " << grados << " es: " << seno << endl;
}
void Funciones::cos() {
    cout << "Digite el angulo que se quiera calcular" << endl;
    cin >> gradosc;
    grados = 90 - gradosc;
    temporal = ((4 * grados * (180 - grados)));
    coseno = temporal / (40500 - (grados * (180 - grados)));
    cout << "El Seno del angulo: " << grados << " es: " << coseno << endl;
}
void Funciones::tan() {
    cout << "Digite el angulo que se quiera calcular" << endl;
    cin >> gradosc;
    temporal = ((4 * gradosc * (180 - gradosc)));
    seno = temporal / (40500 - (gradosc * (180 - gradosc)));
    grados = 90 - gradosc;
    temporal = ((4 * grados * (180 - grados)));
    coseno = temporal / (40500 - (grados * (180 - grados)));
    tang = seno / coseno;
    cout << "El Seno del angulo: " << grados << " es: " << tang << endl;
}

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
            cout << endl;
            Funciones funciones;
            Matriz matriz;
          
            switch (opc){
            case 1:
                matriz.multiplicarMatrices();
                break;
            case 2: 
                funciones.cos();
                break;
            case 3: 
                funciones.sen();
                break;
            case 4: 
                funciones.tan();
                break;
            default:
                cout << "Opcion no valida" << endl;
                break;
            
            }
            system("pause");
            system("cls");
            cout << "Quiere repetir el programa?\n1.Si\n2.No y salir del programa" << endl;
            system("pause");
            cin >> opc;
            system("cls");
        } while (opc != 2);
    }


};
