#include <iostream>
#include <vector>
#include <string>
#include "productos.h"
#include "lujo.h"
#include "alcoholicos.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;
int Edilson_Menu();
int Edilson_PMenu();
int main(int argc, char *argv[])
{
	vector<Productos*> productos;
    double edilson_educativo, edilson_alcoholico, edilson_delujo;
    cout << "Tasa de productos educativos: " ;
    cin >> edilson_educativo;
    cout << "Tasa de productos alcoholicos: ";
    cin >> edilson_alcoholico;
    cout << "Tasa de productos de lujo: ";
    cin >> edilson_delujo;

    switch(Edilson_Menu()){
    	case 1:
    		string edilson_nombre;
    		cout << "Ingrese el nombre del cliente: ";
    		cin >> edilson_nombre;
    		break;
    	case 2:
    		switch(Edilson_PMenu()){
    			case 1:
    				double edilson_volumen, edilson_peso, edilson_precio;
    				string edilson_cliente;
    				cout << "Volumen: ";
    				cin >> edilson_volumen;
    				cout << "Peso: ";
    				cin >> edilson_peso;
    				cout << "Cliente: ";
    				cin >> edilson_cliente;
    				cout << "Precio :";
    				cin >> edilson_precio;
    				break;
    			case 2:
    				double edilson_volumen, edilson_peso, edilson_precio;
    				string edilson_cliente;
    				cout << "Volumen: ";
    				cin >> edilson_volumen;
    				cout << "Peso: ";
    				cin >> edilson_peso;
    				cout << "Cliente: ";
    				cin >> edilson_cliente;
    				cout << "Precio :";
    				cin >> edilson_precio;
    				break;
    			case 3:
    				double edilson_volumen, edilson_peso, edilson_precio;
    				string edilson_cliente;
    				cout << "Volumen: ";
    				cin >> edilson_volumen;
    				cout << "Peso: ";
    				cin >> edilson_peso;
    				cout << "Cliente: ";
    				cin >> edilson_cliente;
    				cout << "Precio :";
    				cin >> edilson_precio;dg
    				break;
    		}
    		break;
    }

}

int Menu(){
	int edilson_temp;
	cout << "1. Agregar clientes " << endl;
	cout << "2. Agregar productos " << endl;
	cout << "3. Salir" << endl;
	cin >> edilson_temp;
	while(edilson_temp<1 || edilson_temp>3){
		cout << "Error, ingrese una opcion del menu..." << endl;
		cout << "1. Agregar clientes " << endl;
		cout << "2. Agregar productos " << endl;
		cout << "3. Salir" << endl;
		cin >> edilson_temp;
	}
	return edilson_temp;
}
int Edilson_PMenu(){
	int edilson_temp;
	cout << "1. Productos educativos" << endl;
	cout << "2. Productos alcoholicos" << endl;
	cout << "3. Productos de Lujo" << endl;
	cout << "4. Salir" << endl;
	cin >> edilson_temp;
	while(edilson_temp<1 || edilson_temp>3){
		cout << "Error, ingrese una opcion del menu..." << endl;
		cout << "1. Productos educativos" << endl;
		cout << "2. Productos alcoholicos" << endl;
		cout << "3. Productos de Lujo" << endl;
		cout << "4. Salir" << endl;
		cin >> edilson_temp;
	}
	return edilson_temp;
}
