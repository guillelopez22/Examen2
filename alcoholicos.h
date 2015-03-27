#ifndef ALCOHOLICOS_H
#define ALCOHOLICOS_H

#include <string>

using std::string;

class Alcoholicos:public Productos {
	double edilson_tasa;
public:
	Alcoholicos(double, double, string, double);
	virtual string toString()const;
	virtual double cobrarImpuesto();
	virtual int getId();
};

#endif /* JUJO_H */