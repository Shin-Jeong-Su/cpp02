#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _value;
		static const int _fractionalBits;

	public:
		Fixed();
		Fixed(const int param);
		Fixed(const float param);
		Fixed(const Fixed &fixed);

		~Fixed();

		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed&	min(const Fixed& cmp1, const Fixed &cmp2) const;

		void	operator=(const Fixed &fixed);
		bool	operator>(const Fixed &fixed);
		bool	operator<(const Fixed &fixed);
		bool	operator>=(const Fixed &fixed);
		bool	operator<=(const Fixed &fixed);
		bool	operator==(const Fixed &fixed);
		bool	operator!=(const Fixed &fixed);
		bool	operator+(const Fixed &fixed);
		bool	operator-(const Fixed &fixed);
		bool	operator*(const Fixed &fixed);
		bool	operator/(const Fixed &fixed);
		const Fixed&	operator++();
		const Fixed		operator++(int);
		const Fixed&	operator--();
		const Fixed		operator--(int);
};
std::ostream&	operator<<(std::ostream &os, const Fixed &fixed);
#endif