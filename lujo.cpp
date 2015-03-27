#include "lujo.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Lujo::Lujo(double edilson_volumen, double edilson_peso, string edilson_cliente):Productos(edilson_volumen, edilson_peso, edilson_cliente) {
}

virtual string Lujo::toString()const {
	stringstream ss;
	ss << Productos::toString() << ", Tasa: " << edilson_tasa;
	return ss.str();
}

virtual double Lujo::cobrarImpuesto() {
	return (this->edilson_peso*this->edilson_tasa + this->edilson_volumen*this->edilson_tasa);
}

virtual int Lujo::getId() {
	return 3;
}