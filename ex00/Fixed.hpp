#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>

class Fixed{
	private:
		int _value;
		static const int _fractionalBits;
	public:
		Fixed();
		Fixed(const Fixed &fixed);

		~Fixed();

		int getRawBits() const;
		void setRawBits(int const raw);

		void operator =(const Fixed &fixed);
};
#endif