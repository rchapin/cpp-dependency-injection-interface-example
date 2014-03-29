#ifndef NEEDS_DEP_T
#define NEEDS_DEP_T

/**
 * Interface for class that requires an instance of the dep_t class.
 */
template <class T>
class needs_dep_t
{
	public:
		virtual ~needs_dep_t() {}
		virtual void set_dep(T * dep) = 0;
		virtual void do_something(int x, int y) = 0;
};
#endif
