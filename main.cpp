#include "mainwindow.h"
#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
int Menu();
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

    switch(Menu()){
    	case 1:
    		break;
    	case 2:
    		break;
    }

}

int Menu(){
	int temp;
	cout << "1. Agregar clientes " << endl;
	cout << "2. Agregar productos " << endl;
	cout << "3. Salir" << endl;
	cin >> temp;
	while(temp<1 || temp>2){
		cout << "Error, ingrese una opcion del menu..." << endl;
		cout << "1. Agregar clientes " << endl;
		cout << "2. Agregar productos " << endl;
		cout << "3. Salir" << endl;
		cin >> temp;
	}
	return temp;
}
