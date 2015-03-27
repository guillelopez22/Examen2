#include "productos.h"
#include "lujo.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Lujo::Lujo(double edilson_volumen, double edilson_peso, string edilson_cliente, double edilson_precio, double edilson_tasa):Productos(edilson_volumen, edilson_peso, edilson_cliente, edilson_precio) {
}

virtual string Lujo::toString()const {
	stringstream ss;
	ss << Productos::toString() << ", Tasa: " << edilson_tasa;
	return ss.str();
}

virtual double Lujo::cobrarImpuesto() {
	return ((Productos::getEdilson_peso()*this->edilson_tasa + Productos::getEdilson_volumen())*this->edilson_tasa);
}

void Lujo::setEdilson_tasa(double edilson_tasa) {
	this->edilson_tasa = edilson_tasa;
}

virtual int Lujo::getId() {
	return 3;
}