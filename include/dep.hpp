#ifndef DEP
#define DEP
#include "dep_t.hpp"

class dep : public dep_t
{
	public:
		~dep();
		dep() {}
		void calc(int x, int y);
};

#endif
