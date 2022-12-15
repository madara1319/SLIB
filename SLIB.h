#pragma once 
#include <iostream>
#include <cmath>

using std::cout, std::endl;
//instrukcje preprocesora zapobiegajace wielokrotnym definicjom naszej klasy

class SLIB 
{
	private:
		int x,y;
	public:
		SLIB(int x, int y);
		double getNorm();
		int getX() const;
		int getY() const;
};


