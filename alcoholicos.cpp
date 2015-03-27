#include "lujo.h"
#include <string>
#include <sstream>

Alcoholicos::Alcoholicos(double edilson_volumen, double edilson_peso, string edilson_cliente):Productos(edilson_volumen, edilson_peso, edilson_cliente) {
}

virtual strign Alcoholicos::toString()const {
	stringstream ss;
	ss << Productos::toString() << ", Tasa: " << edilson_tasa;
}

virtual double Alcoholicos::cobrarImpuesto() {
	return (this->edilson_peso*this->edilson_tasa + this->edilson_volumen*this->edilson_tasa);
}

virtual int Alcoholicos::getId() {
	return 3;
}