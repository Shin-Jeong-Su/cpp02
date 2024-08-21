#include "Point.hpp"

Point::Point():_x(0),_y(0){}
Point::Point(const float f1, const float f2):_x(f1),_y(f2){}
Point::Point(const Point& point):_x(point._x),_y(point._y){}

Point::~Point(){}

Point&	Point::operator=(const Point& rhs)
{
	this->~Point();
	new(this) Point(rhs);
	return *this;
}