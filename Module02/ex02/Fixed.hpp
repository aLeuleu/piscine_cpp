class Fixed
{
private:
	int					_value;
	static const int	_bits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& fixed);
	Fixed& operator=(const Fixed& fixed);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	Fixed(int const value);
	Fixed(float const value);
	float	toFloat(void) const;
	int		toInt(void) const;

	bool	operator>(const Fixed& anotherFixed) const;
	bool 	operator<(const Fixed& anotherFixed) const;
	bool 	operator>=(const Fixed& anotherFixed) const;
	bool 	operator<=(const Fixed& anotherFixed) const;
	bool 	operator==(const Fixed& anotherFixed) const;
	bool 	operator!=(const Fixed& anotherFixed) const;
	Fixed	operator+(const Fixed& anotherFixed) const;
	Fixed	operator-(const Fixed& anotherFixed) const;
	Fixed	operator*(const Fixed& anotherFixed) const;
	Fixed	operator/(const Fixed& anotherFixed) const;

	Fixed&	operator++();      //prefix that is to say ++a
	Fixed	operator++(int); //postfix
	Fixed&	operator--();
	Fixed	operator--(int);

	static Fixed&		min(Fixed& a, Fixed& b);
	static Fixed&		max(Fixed& a, Fixed& b);
	static const Fixed&	min(const Fixed& a, const Fixed& b);
	static const Fixed&	max(const Fixed& a, const Fixed& b);

};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

