#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point a(0,0);
	Point b(10,10);
	Point c(10,0);
	Point point(7,6);

	std::cout<<(bsp(a,b,c,point) ? "in":"not in");
}