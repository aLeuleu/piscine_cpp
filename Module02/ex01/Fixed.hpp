#pragma once
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

	explicit    Fixed(int const value);
	explicit    Fixed(float const value);
	float       toFloat(void) const;
	int		    toInt(void) const;

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);