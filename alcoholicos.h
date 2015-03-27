#ifndef ALCOHOLICOS_H
#define ALCOHOLICOS_H

#include <string>
#include "productos.h"

using std::string;

class Alcoholicos:public Productos {
	double edilson_tasa;
public:
	Alcoholicos(double, double, string, double, double);
	virtual string toString()const;
	virtual double cobrarImpuesto();
	void setEdilson_tasa(double);
	virtual int getId();
};

#endif /* JUJO_H */