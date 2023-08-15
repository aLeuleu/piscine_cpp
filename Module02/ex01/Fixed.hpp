class FixedA
{
private:
	int					_value;
	static const int	_bits = 8;
public:
	FixedA();
	~FixedA();
	FixedA(const Fixed& fixed);
	Fixed& operator=(const Fixed& fixed);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	FixedA(int const value);
	FixedA(float const value);
	float	toFloat(void) const;
	int		toInt(void) const;

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);