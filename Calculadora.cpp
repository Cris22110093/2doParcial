#include <iostream>
#include <map>
using namespace std;
map<char, int>mapa;

class Convertidor{
private:

public:

    int romanoArabigo(string romano) {
     
        int res = 0;
        int n = romano.length();
        for (int i = 0;i < n;i++) {
            if (i + 1 < n && mapa[romano[i]] < mapa[romano[i + 1]]) {
                res += (mapa[romano[i + 1]] - mapa[romano[i]]);
                i++;
            }
            else {
                res += mapa[romano[i]];
            }
        }
        //return res;
        cout<<"El numero en decimal es:" << res;
        return 0;
    }
    
};
class Menu {
private:
   int opc2;
   string romano;

public:
    Menu() {
        opc2 = 0;
    }
    void run() {
        do {
            cout << "Bienvenido" << endl;
            cout << "Digite un numero en romano en Mayusculas" << endl;
            cin >> romano;
            Convertidor convertidor;
            convertidor.romanoArabigo(romano);
            cout << endl;
            system("pause");
            system("cls");
            cout << "Quiere repetir el programa?\n1.Si\n2.No y salir del programa" << endl;
            cin >> opc2;
            system("cls");
        } while (opc2 !=2);
    }
};
int main() {
   
    mapa['I'] = 1;
    mapa['V'] = 5;
    mapa['X'] = 10;
    mapa['L'] = 50;
    mapa['C'] = 100;
    mapa['D'] = 500;
    mapa['M'] = 1000;
    Menu menu;
    menu.run();
    return 0;
}
