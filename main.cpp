#include <iostream>
#include <vector>
#include <string>
#include "productos.h"
#include "lujo.h"
#include "educativos.h"
#include "alcoholicos.h"
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;

int Edilson_Menu();
string createCliente();
int Edilson_PMenu();
string getCliente(vector<string>);
void Edilson_Historial(vector<Productos*>);



int main(int argc, char *argv[])
{
	bool morazanES_SEXY;
	morazanES_SEXY = true;
	int seguir=9;
    cout<<"¡Bienvenido Edilson!"<<endl;
	vector<Productos*> productos;
	vector<string> clientes;
	cout << "Antes de empezar, ocupamos por lo menos 5 clientes: " << endl;
	while(clientes.size()<5){
		clientes.push_back(createCliente());
	}
    double edilson_educativo, edilson_alcoholico, edilson_delujo;
    cout << "Tasa de productos educativos: " ;
    cin >> edilson_educativo;
    cout << "Tasa de productos alcoholicos: ";
    cin >> edilson_alcoholico;
    cout << "Tasa de productos de lujo: ";
    cin >> edilson_delujo;
    while(seguir != 4){
	    switch(Edilson_Menu()){
	    	case 1:{
	    		string edilson_nombre;
	    		cout << "Ingrese el nombre del cliente: ";
	    		cin >> edilson_nombre;
	    		clientes.push_back(edilson_nombre);
	    		}
	    		break;
	    	case 2:{
	    		double edilson_volumen, edilson_peso, edilson_precio;
	    		string edilson_cliente;
	    		switch(Edilson_PMenu()){
	    			case 1:{
	    				cout << "Volumen: ";
	    				cin >> edilson_volumen;
	    				cout << "Peso: ";
	    				cin >> edilson_peso;
	    				edilson_cliente = getCliente(clientes);
	    				cout << "Precio :";
	    				cin >> edilson_precio;
	    				productos.push_back(new Educativos(edilson_volumen, edilson_peso, edilson_cliente, edilson_precio, edilson_educativo));
	    			}
	    				break;
	    			
	    			case 2:{
	    				cout << "Volumen: ";
	    				cin >> edilson_volumen;
	    				cout << "Peso: ";
	    				cin >> edilson_peso;
	    				edilson_cliente = getCliente(clientes);
	    				cout << "Precio :";
	    				cin >> edilson_precio;
	    				productos.push_back(new Alcoholicos(edilson_volumen, edilson_peso, edilson_cliente, edilson_precio, edilson_alcoholico));
	    			}	
	    				break;
	    		
	    			case 3:{
	    				cout << "Volumen: ";
	    				cin >> edilson_volumen;
	    				cout << "Peso: ";
	    				cin >> edilson_peso;
	    				edilson_cliente = getCliente(clientes);
	    				cout << "Precio :";
	    				cin >> edilson_precio;
	    				productos.push_back(new Lujo(edilson_volumen, edilson_peso, edilson_cliente, edilson_precio, edilson_delujo));
	    				}
	    				break;
	    			case 4:{
	    				break;
	    			}
	    			break;
	    			
	    		}
	    	}
	    		break;
	            case 3 : {
	                Edilson_Historial(productos);
	            }
	            break;
	            case 4:{
	            	seguir=4;
	                break;
	            }
	            break;
	    }
	}
	for (int i = 0; i < productos.size(); ++i)
	{
		delete productos.at(i);
	}
	return 0;
}

int Edilson_Menu(){
	int edilson_temp;
	cout << "1. Agregar clientes " << endl;
	cout << "2. Agregar productos " << endl;
	cout << "3. Historial " << endl;
    cout << "4. Salir" << endl;
	cin >> edilson_temp;
	while(edilson_temp<1 || edilson_temp>4){
		cout << "Error, ingrese una opcion del menu..." << endl;
		cout << "1. Agregar clientes " << endl;
		cout << "2. Agregar productos " << endl;
        cout << "3. Historial " << endl;
		cout << "4. Salir" << endl;
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
	while(edilson_temp<1 || edilson_temp>4){
		cout << "Error, ingrese una opcion del menu..." << endl;
		cout << "1. Productos educativos" << endl;
		cout << "2. Productos alcoholicos" << endl;
		cout << "3. Productos de Lujo" << endl;
		cout << "4. Salir" << endl;
		cin >> edilson_temp;
	}
	return edilson_temp;
}

void Edilson_Historial(vector<Productos*> morazan_list){
    for(int i=0;i<morazan_list.size();i++){
        cout<<morazan_list.at(i)->toString()<<endl;
        cout<<"Tipo de Impuesto : ";
        if(morazan_list.at(i)->getId()==1){
            cout<<"Educativo"<<endl;
        }else if(morazan_list.at(i)->getId()==2){
            cout<<"Alcoholico"<<endl;
        }else if(morazan_list.at(i)->getId()==3){
            cout<<"Lujo"<<endl;
        }
        cout << "El Impuesto: " << morazan_list.at(i)->cobrarImpuesto() << endl;
    }

}
string getCliente(vector<string> clientes){
	cout << endl;
	cout << "Cliente que lo compra: " << endl;
	int n;
	for (int i = 0; i < clientes.size(); ++i)
	{
		cout << i << ": " << clientes.at(i) << endl;
	}
	cin >>n;
	while( n<0 || n>clientes.size() ){
		cout << "Error... ingrese uno dentro de la lista..." << endl;
		for (int i = 0; i < clientes.size(); ++i){
		cout << i << ": " << clientes.at(i) << endl;
		}
	cin >>n;
	}
	return clientes.at(n);
}
string createCliente(){
	string temp;
	cout << "nombre: ";
	cin >> temp;
	
	return temp;
}