#ifndef _HH_NODE_2D
#define _HH_NODE_2D

#include "fem_def.hpp"

namespace fem
{
	class Node_2d
	{
	protected:
		Real x = 0.0;
		Real y = 0.0;
		bool is_bd = false;

	public:
		Node_2d(void) = default;
		Node_2d(const Real &x_1, const Real &x_2, bool b): x(x_1), y(x_2), is_bd(b) {}
		~Node_2d(void) = default;
		
		Real get_x() const {return x;}
		Real get_y() const {return y;}
		
		void set_x(const Real& x_1);
		void set_y(const Real& x_2);
		
		bool is_boundary (void) const {return is_bd;} 
		
		virtual void print(void) const;
		virtual void print(std::ofstream &) const;
	};
}
#endif