#ifndef __POINT_H__
#define __POINT_H__

#pragma once
#include "Fixed.hpp"

class Point
{
	private:
		const Fixed	_x;
		const Fixed	_y;
	public:
		Point();
		Point(const float f1, const float f2);
		Point(const Point& point);

		~Point();


		Point& operator=(const Point& rhs);
};
#endif