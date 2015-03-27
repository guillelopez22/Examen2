#ifndef EDUCATIVOS_H
#define EDUCATIVOS_H

#include "productos.h"

class Educativos : public Productos{
public:
	double edilson_tasa;
	double getEdilson_tasa();
	virtual string toString() const;
	virtual double cobrarImpuesto();
	virtual int getId();

};

#endif