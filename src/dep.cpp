#include <iostream>
#include "../include/dep.hpp"

dep::~dep()
{
	std::cout << "From dep DTOR" << std::endl;
}

void dep::calc(int x, int y)
{
	std::cout << "From dep.calc" << std::endl;
	int z = x + y;
	std::cout << "z = " << z << std::endl;
}
