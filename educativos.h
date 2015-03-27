#ifndef EDUCATIVOS_H
#define EDUCATIVOS_H

#include "productos.h"
#include "educativos.h"

class Educativos : public Productos{
	double edilson_tasa;	
public:
	Educativos
	double setEdilson_tasa(double);
	virtual string toString() const;
	virtual double cobrarImpuesto();
	virtual int getId();

};

#endif