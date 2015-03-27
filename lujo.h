#ifndef LUJO_H
#define LUJO_H

#include <string>

using std::string;

class Lujo:public Productos {
	double edilson_tasa;
public:
	Lujo(double, double, string, double);
	virtual string toString()const;
	virtual double cobrarImpuesto();
	virtual int getId();
};

#endif /* JUJO_H */