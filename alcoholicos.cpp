#include "productos.h"
#include "alcoholicos.h"
#include "lujo.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Alcoholicos::Alcoholicos(double edilson_volumen, double edilson_peso, string edilson_cliente, double edilson_precio,	 double edilson_tasa):Productos(edilson_volumen,edilson_peso,edilson_cliente,edilson_precio) {
}

string Alcoholicos::toString()const {
	stringstream ss;
	ss << Productos::toString() << ", Tasa: " << edilson_tasa;
	return ss.str();
}

double Alcoholicos::cobrarImpuesto() {
	return ((this->edilson_peso + this->edilson_volumen) * this->edilson_tasa);
}

void Alcoholicos::setEdilson_tasa(double edilson_tasa) {
	this->edilson_tasa = edilson_tasa;
}

virtual int Alcoholicos::getId() {
	return 2;
}