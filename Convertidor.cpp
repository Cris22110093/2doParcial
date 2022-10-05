#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
class Convertidor {
private:
    int decimal = 0;
    string binario = "";
public:
    void setDecimal(int _decimal) {
        this->decimal = _decimal;
        decimalBinario(this->decimal);
        cout << "\nDecimal a Hexadecimal" << endl;
        hexadecimal(this->decimal);
    }
    void decimalBinario(int _decimal) {
        if (_decimal == 0 || _decimal == 1) {
            cout << _decimal << "   ";
        }
        else {
            cout << _decimal % 2 << "   ";
            decimalBinario(_decimal / 2);
        }
    }
    void binarioDecimal(string binary) {
        this->binario = binary;
        int pot = 0;
        for (int c = binary.size() - 1; c >= 0; c--)
        {
            if (this->binario[c] == '1') {
                this->decimal += pow(2, pot);
            }
            pot++;
        }
        cout << "\nBinario a Decimal" << endl;
        cout << this->decimal << endl;
        cout << "\nDecimal a Hexadecimal" << endl;
        hexadecimal(this->decimal);
        cout << endl;
    }
    void hexadecimal(int _decimal) {
        if (_decimal < 10) {
            cout << _decimal;
        }
        else if (_decimal >= 10 && _decimal <= 15) {
            cout << char(_decimal + 55);
        }
        else {
            hexadecimal(_decimal / 16);
            if (_decimal % 16 >= 10 && _decimal % 16 <= 15) {
                cout << char(_decimal % 16 + 55);
            }
            else {
                cout << _decimal % 16;
            }
        }
    }
};
class Menu {
private:
    char opc;
    int nDecimal;
    int opc2;
    char nBinario[10];
public:
    Menu() {
        opc = ' ';
        nDecimal = 0;
    }
    void run() {
        char opc;
        do {
            system("cls");
            cout << "Bienvenido" << endl;
            cout << "Elige una opcion\n1.Convertir a decimal\n2.Convertir a binario" << endl;
            cin >> opc;

            Convertidor convertidor;

            switch (opc)
            {
            case '1':
                cout << "Digite un numero decimal:" << endl;
                cin >> nDecimal;
                cout << "\nDecimal a Binario" << endl;
                cout << "1   2   4   8  16  32  64 128 256 512" << endl;
                convertidor.setDecimal(nDecimal);
                break;
            case '2':
                cout << "Digite un numero binario:" << endl;
                cin >> nBinario;
                convertidor.binarioDecimal(nBinario);
                break;
            default:
                cout << "Opcion no valida" << endl;
                break;
            }
 
            cout << endl;
            cout << endl;
            system("pause");
            system("cls");
            cout << "Quiere repetir el programa?\n1.Si\n2.No y salir del programa" << endl;
            system("pause");
            cin >> opc2;
            system("cls");
        } while (opc2 != 2);
    }
};
int main() {
    Menu menu;
    menu.run();
    return 0;
}
