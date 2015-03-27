#include "educativos.h"
#include <string>
using std::string;

Educativos::Educativos(double tasa);
double Educativos::setEdilson_tasa(double);
string Educativos::toString() const;
double Educativos::cobrarImpuesto();
int Educativos::getId();