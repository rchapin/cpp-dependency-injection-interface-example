#ifndef DEP_T
#define DEP_T

/**
 * Interface class for the dependency object.
 * Only includes method definitions that are virtual.
 */
class dep_t
{
	public:
		virtual ~dep_t() {}
		virtual void calc(int x, int y) = 0;
};
#endif
