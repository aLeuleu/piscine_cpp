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
};