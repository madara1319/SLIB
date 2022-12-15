#include "SLIB.h"


double SLIB::getNorm()
{
	return sqrt(x*x + y*y);
}
SLIB::SLIB(int x, int y) : x(x), y(y)
{
	cout<<"Stworzyles obiekt klasy slib"<<endl;
}
int SLIB::getX() const 
{
	return x;
}
int SLIB::getY() const 
{
	return y;
}

