#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point a;
	Point b;
	Point c;
	Point point;

	std::cout<<(bsp(a,b,c,point) ? "in":"not in");
}