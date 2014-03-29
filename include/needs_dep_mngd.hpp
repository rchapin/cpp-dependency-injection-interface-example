#ifndef NEEDS_DEP_MNGD
#define NEEDS_DEP_MNGD

#include <iostream>
#include "needs_dep.hpp"

/**
 * Derived class that manages the dependency for the needs_dep_t instances.
 */
template <class T>
class needs_dep_mngd : public needs_dep<T>
{
	private:
		T * dep;

	public:
		~needs_dep_mngd()
		{
			delete this->dep;
		}

		needs_dep_mngd() : needs_dep<T>()
		{
			std::cout << "From needs_dep_mngd CTOR" << std::endl;
			dep = new T();
			this->set_dep(dep);
		}
};
#endif
