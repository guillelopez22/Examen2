#ifndef PRODUCTOS_H
#define PRODUCTOS_H // David Castro 11341047; Guillermo Lopez 11141097; Carlos Vincio 11311177

#include <string>

using std::string;

class Productos{
string edilson_cliente;
double edilson_volumen, edilson_peso,edilson_precio;
public:
	Productos(double,double,string,double);
	virtual  string toString() const;
	double getEdilson_volumen() const;
	string getEdilson_cliente() const;
	double getEdilson_peso() const;
	double getEdilson_precio()const;
	virtual double cobrarImpuesto()=0;
	virtual int getId()=0;

};

#endif