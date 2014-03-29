#include <iostream>
#include "../include/dep.hpp"
#include "../include/needs_dep_mngd.hpp"

int main()
{
	std::cout << "-- Instantiating a derived class of needs_dep that manages the dependency"
		<< std::endl;
	needs_dep<dep> * nd = new needs_dep_mngd<dep>();
	nd->do_something(1, 2);
	delete nd;

	std::cout << "-- Instantiating a derived class of needs_dep with an interface reference"
		<< std::endl;
	needs_dep_t<dep> * ndt = new needs_dep_mngd<dep>();
	ndt->do_something(4, 5);
	delete ndt;

	std::cout << "-- Stack allocated needs_dep and dep instances"
		<< std::endl;
	needs_dep<dep> nd_so;
	dep d;
	nd_so.set_dep(&d);
	nd_so.do_something(1, 9);
}

