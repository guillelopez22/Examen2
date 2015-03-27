#include "productos.h"
#include <sstream>

using std::stringstream;

Productos(double edilson_volumen,double edilson_peso,string edilson_cliente, double edilson_tasa){
	this->edilson_volumen=edilson_volumen;
	this->edilson_peso=edilson_peso;
	this->edilson_cliente=edilson_cliente;
	this->edilson_tasa=edilson_tasa;
}

string toString() const{
	stringstream ss;
	ss<<"Volumen: "<<edilson_volumen<<", Peso: "<<edilson_peso<<", Cliente: "<<edilson_cliente<<", Tasa :"<<edilson_tasa;
	return ss.str();
}

double getEdilson_volumen() const{
	return edilson_volumen;
}

string getEdilson_cliente() const{
	return edilson_cliente;
}

double getEdilson_peso() const{
	return edilson_peso;
}

double getEdilson_tasa() const{
	return edilson_tasa;
}
