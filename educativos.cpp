#include "educativos.h"
#include "productos.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Educativos::Educativos(double edilson_volumen,double edilson_peso,string edilson_cliente,double edilson_precio,double edilson_tasa)
: Productos(edilson_volumen,edilson_peso,edilson_cliente,edilson_precio){
	setEdilson_tasa(edilson_tasa)
}
void Educativos::setEdilson_tasa(double edilson_tasa){
	this->edilson_tasa=edilson_tasa;
}
string Educativos::toString() const{
	stringstream ss;
	ss<<Productos::toString()<<", Tasa: "<<edilson_tasa;
	return ss.str();
}
double Educativos::cobrarImpuesto(){
	return Productos::getEdilson_volumen()*edilson_tasa;
}
int Educativos::getId(){
	return 1;
}