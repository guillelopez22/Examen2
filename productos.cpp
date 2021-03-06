#include "productos.h"
#include <sstream>

using std::stringstream;

Productos::Productos(double edilson_volumen,double edilson_peso,string edilson_cliente,double edilson_precio){
	this->edilson_volumen=edilson_volumen;
	this->edilson_peso=edilson_peso;
	this->edilson_cliente=edilson_cliente;
	this->edilson_precio=edilson_precio;
}

string Productos::toString() const{
	stringstream edilson_ss;
	edilson_ss<<"Volumen: "<<edilson_volumen<<", Peso: "<<edilson_peso<<", Cliente: "<<edilson_cliente;
	return edilson_ss.str();
}

double Productos::getEdilson_volumen() const{
	return edilson_volumen;
}

string Productos::getEdilson_cliente() const{
	return edilson_cliente;
}

double Productos::getEdilson_peso() const{
	return edilson_peso;
}

double Productos::getEdilson_precio()const{
	return edilson_precio;
}
