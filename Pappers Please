#include <iostream>
#include <cstdlib>
#include <time.h>
#include <sstream>
#include <fstream>

using namespace std;

class Persona
{
private:
	int opc, opc2;
	string nombre, nombre2, edad, edad2, genero, genero2, curp, curp2, domicilio, domicilio2, fechaNac, fechaNac2;
public:
	Persona(int opc, int opc2, string nombre, string nombre2, string edad, string edad2, string genero, string genero2, 
		    string curp, string curp2, string domicilio, string domicilio2, string fechaNac, string fechaNac2)
	{
		this->opc = opc;
		this->opc2 = opc2;
		this->nombre = nombre;
		this->nombre2 = nombre2;
		this->edad = edad;
		this->edad2 = edad2;
		this->genero = genero;
		this->genero2 = genero2;
		this->curp = curp;
		this->curp2 = curp2;
		this->domicilio = domicilio;
		this->domicilio2 = domicilio2;
		this->fechaNac = fechaNac;
		this->fechaNac2 = fechaNac2;
	
	}

	int Validacion()
	{
		if (nombre == nombre2 && edad == edad2 && genero == genero2 && curp == curp2 && domicilio == domicilio2 && 
			fechaNac == fechaNac2)
		{
			if (opc2 == 1)
			{
				return 1;
			}
			else if (opc2 == 2)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			if (opc2 == 1)
			{
				return 0;
			}
			else if (opc2 == 2)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}

	int Validar()
	{
		int x = 0;
		switch (opc)
		{
		case 1:
			if (nombre != nombre2)
			{
				x++;
			}
			else
			{
				cout << "Opcion incorrecta, el nombre si es el mismo\n";
			}
			break;
		case 2:
			if (edad != edad2)
			{
				x++;
			}
			else
			{
				cout << "Opcion incorrecta, la edad si es la misma\n";
			}
			break;
		case 3:
			if (genero != genero2)
			{
				x++;
			}
			else
			{
				cout << "Opcion incorrecta, el genero si es el mismo\n";
			}
			break;
		case 4:
			if (curp != curp2)
			{
				x++;
			}
			else
			{
				cout << "Incorrecto la curp si es la misma\n";
			}
			break;
		case 5:
			if (domicilio != domicilio2)
			{
				x++;
			}
			else
			{
				cout << "Incorrecto el domicilio, es el mismo\n";
			}
			break;
		case 6:
			if (fechaNac != fechaNac2)
			{
				x++;
			}
			else
			{
				cout << "Incorrecto en la fecha de nacimiento, si es la misma\n";
			}
			break;
		case 7:
			return 0;
			break;
		default:
			cout << "\nOpcion no disponible\n\n";
			break;
		}
		return x;
	}
};

class Inicio
{
private:
	int opc, opc2, opc3, opc4;
	string NombreINE[6], NombrePasaporte[6], EdadINE[6], EdadPasaporte[6], GeneroINE[6], GeneroPasaporte[6], CurpINE[6], 
		    CurpPasaporte[6], DomINE[6], DomPasaporte[6], FechaNacINE[6], FechaNacPasaporte[6];
public:
	Inicio()
	{
		
		opc = 0;
		opc2 = 0;
		opc3 = 0;
		opc4 = 0;
		NombreINE[5] = "";
		NombrePasaporte[5] = "";
		EdadINE[5] = "";
		EdadPasaporte[5] = "";
		GeneroINE[5] = "";
		GeneroPasaporte[5] = "";
		CurpINE[5] = "";
		CurpPasaporte[5] = "";
		DomINE[5] = "";
		DomPasaporte[5] = "";
		FechaNacINE[5] = "";
		FechaNacPasaporte[5] = "";
		
	}

	void run()
	{
		int i = 0, k = 0, pointT = 0, pointA = 0;
		string parrafo;
		ifstream archivo("C:\\Users\\crist\\source\\repos\\PappersPleaseV3\\INENOMBRE.txt");
		while (getline(archivo, parrafo))
		{
			NombreINE[i] = parrafo;
			i++;
		}
		archivo.close();
		ifstream archivo2("C:\\Users\\crist\\source\\repos\\PappersPleaseV3\\NOMBRE.txt");
		i = 0;
		while (getline(archivo2, parrafo))
		{
			NombrePasaporte[i] = parrafo;
			i++;
		}
		archivo2.close();



		ifstream archivo3("C:\\Users\\crist\\source\\repos\\PappersPleaseV3\\INEEDAD.txt");
		i = 0;
		while (getline(archivo3, parrafo))
		{
			EdadINE[i] = parrafo;
			i++;
		}
		archivo3.close();
		ifstream archivo4("C:\\Users\\crist\\source\\repos\\PappersPleaseV3\\EDAD.txt");
		i = 0;
		while (getline(archivo4, parrafo))
		{
			EdadPasaporte[i] = parrafo;
			i++;
		}
		archivo4.close();



		ifstream archivo5("C:\\Users\\crist\\source\\repos\\PappersPleaseV3\\INEGENERO.txt");
		i = 0;
		while (getline(archivo5, parrafo))
		{
			GeneroINE[i] = parrafo;
			i++;
		}
		archivo5.close();
		ifstream archivo6("C:\\Users\\crist\\source\\repos\\PappersPleaseV3\\GENERO.txt");
		i = 0;
		while (getline(archivo6, parrafo))
		{
			GeneroPasaporte[i] = parrafo;
			i++;
		}
		archivo6.close();



		ifstream archivo7("C:\\Users\\crist\\source\\repos\\PappersPleaseV3\\INECURP.txt");
		i = 0;
		while (getline(archivo7, parrafo))
		{
			CurpINE[i] = parrafo;
			i++;
		}
		archivo7.close();
		ifstream archivo8("C:\\Users\\crist\\source\\repos\\PappersPleaseV3\\CURP.txt");
		i = 0;
		while (getline(archivo8, parrafo))
		{
			CurpPasaporte[i] = parrafo;
			i++;
		}
		archivo8.close();



		ifstream archivo9("C:\\Users\\crist\\source\\repos\\PappersPleaseV3\\INEDOMICILIO.txt");
		i = 0;
		while (getline(archivo9, parrafo))
		{
			DomINE[i] = parrafo;
			i++;
		}
		archivo9.close();
		ifstream archivo10("C:\\Users\\crist\\source\\repos\\PappersPleaseV3\\DOMICILIO.txt");
		i = 0;
		while (getline(archivo10, parrafo))
		{
			DomPasaporte[i] = parrafo;
			i++;
		}
		archivo10.close();



		ifstream archivo11("C:\\Users\\crist\\source\\repos\\PappersPleaseV3\\INEFECHANAC.txt");
		i = 0;
		while (getline(archivo11, parrafo))
		{
			FechaNacINE[i] = parrafo;
			i++;
		}
		archivo11.close();
		ifstream archivo12("C:\\Users\\crist\\source\\repos\\PappersPleaseV3\\FECHANAC.txt");
		i = 0;
		while (getline(archivo12, parrafo))
		{
			FechaNacPasaporte[i] = parrafo;
			i++;
		}
		archivo12.close();
		do {
			cout << "BIENVENIDO" << endl;
			cout << "Papeles por favor" << endl;
			

			int num, c, p[6];
			srand(time(NULL));

			for (c = 0; c <= 5; c++)
			{
				num = rand() % 6;
				
				p[c] = num;
			}
		
			cout << endl;
			cout << "**************************************" << endl;
			cout << "INE" << endl;
			cout << "**************************************" << endl;
			cout << "Nombre: " << NombreINE[k]  << endl;
			cout << "Edad: " << EdadINE[k] << endl;
			cout << "Genero: " << GeneroINE[k] << endl;
			cout << "Curp: " << CurpINE[k] << endl;
			cout << "Domicilio: " << DomINE[k] << endl;
			cout << "FechaNacimiento: " << FechaNacINE[k] << endl;
			cout << endl;
			cout << "**************************************" << endl;
			cout << "Pasaporte" << endl;
			cout << "**************************************" << endl;
			cout << "Nombre: "<< NombrePasaporte[p[0]] << endl;
			cout << "Edad: " << EdadPasaporte[p[1]] << endl;
			cout << "Genero: " << GeneroPasaporte[p[2]] << endl;
			cout << "Curp: "<< CurpPasaporte[p[3]] << endl;
			cout << "Domicilio: " << DomPasaporte[p[4]] << endl;
			cout << "FechaNacimiento: " << FechaNacPasaporte[p[5]] << endl;
			
			cout << "\n";
			cout << "Hay datos que no coinciden entre la INE y el Pasaporte?\n1.Si\n2.No" << endl;
			cin >> opc;
			Persona* persona;
			switch (opc)
			{
			case 1:
				do {
					cout << "\nEn que parte no coinciden?\n1.Nombre\n2.Edad\n3.Genero\n4.Curp\n5.Domicilio\n6.Fecha de nacimiento\n7.Salir" << endl;
					cin >> opc2;
					persona = new Persona(opc2, 0, NombreINE[k], NombrePasaporte[p[0]], EdadINE[k], EdadPasaporte[p[1]], GeneroINE[k], GeneroPasaporte[p[2]], CurpINE[k], CurpPasaporte[p[3]], DomINE[k], DomPasaporte[p[4]], FechaNacINE[k], FechaNacPasaporte[p[5]]);
					pointA += persona->Validar();
				} while (opc2 <= 0 || opc2 >= 8); 
				if (opc2 == 7)
				{
					system("pause");
				}
				else
				{
					do {
						cout << "\nHay otro dato que no coincida?\n1.Nombres\n2.Edad\n3.Genero\n4.Curp\n5.Domicilio\n6.Fecha de nacimiento\n7. No y siguiente...." << endl;
						cin >> opc2;
						persona = new Persona(opc2, 0, NombreINE[k], NombrePasaporte[p[0]], EdadINE[k], EdadPasaporte[p[1]], GeneroINE[k], GeneroPasaporte[p[2]], CurpINE[k], CurpPasaporte[p[3]], DomINE[k], DomPasaporte[p[4]], FechaNacINE[k], FechaNacPasaporte[p[5]]);
						pointA += persona->Validar();
					} while (opc2 != 7);
					system("pause");
					cout << "\n\n";
				}
				cout << "\nAprobar acceso a la frontera:\n1.Si\n2.No\n" << endl;
				cin >> opc3;
				Persona* persona2;
				persona2 = new Persona(0, opc3, NombreINE[k], NombrePasaporte[p[0]], EdadINE[k], EdadPasaporte[p[1]], GeneroINE[k], GeneroPasaporte[p[2]], CurpINE[k], CurpPasaporte[p[3]], DomINE[k], DomPasaporte[p[4]], FechaNacINE[k], FechaNacPasaporte[p[5]]);
				pointT += persona2->Validacion();
				system("cls");
				break;
			case 2:
				cout << "\nAprobar acceso a la frontera:\n1.Si\n2.No\n" << endl;
				cin >> opc3;
				persona2 = new Persona(0, opc3, NombreINE[k], NombrePasaporte[p[0]], EdadINE[k], EdadPasaporte[p[1]], GeneroINE[k], GeneroPasaporte[p[2]], CurpINE[k], CurpPasaporte[p[3]], DomINE[k], DomPasaporte[p[4]], FechaNacINE[k], FechaNacPasaporte[p[5]]);
				pointT += persona2->Validacion();
				break;
			default:
				system("cls");
				cout << "Error debes colocar un numero correspondiente a la lista y al proceso que quieras realizar";
				cout << "\n\n";
			}
			system("cls");
			if (k == 5)
			{
				cout << "Fin del juego" << endl;
				cout << "Puntos obtenidos por aciertos: " << pointT<<endl;
				cout << "Puntos obtenidos por descubrir falsificaciones: " << pointA;
				cout << "\n\n\n";
				cout << "\nReiniciar Programa?\n1.Si\n2.No y Salir del programa" << endl;
				cin >> opc4;
				k = 0;
				pointT = 0;
				pointA = 0;
				
			}
			else
			{
				k++;
			}
			system("cls");
		} while (opc4 != 2);
	}
};
int main()
{
	Inicio menu;
	menu.run();
}
