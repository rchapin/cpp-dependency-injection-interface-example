#ifndef NEEDS_DEP
#define NEEDS_DEP

#include <iostream>
#include "needs_dep_t.hpp"

/**
 * Implementation class for the needs_dep_t interface.  This is the
 * class for which we will build the dependency management class.
 */
template <class T>
class needs_dep : public needs_dep_t<T>
{
	private:
		T * dep;

	public:
		needs_dep() : needs_dep_t<T>()
		{
			std::cout << "From needs_dep CTOR" << std::endl;
		}

		~needs_dep()
		{
			std::cout << "From needs_dep DTOR" << std::endl;
		}
		void set_dep(T * dep) { this->dep = dep; }
		void do_something(int x, int y)
		{
			this->dep->calc(x, y);
		}
};
#endif
