#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
    this->fixed_value = 0;
    std::cout << "Constructer called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    *this = other;
    std::cout << "Copy constructer called" << std::endl;
}

Fixed& Fixed::operator= (const Fixed &other)
{
    if (this != &other)
        this->fixed_value = other.getRawBits();
    return *this;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructer called" << std::endl; 
}

int Fixed::getRawBits(void) const
{
    std::cout << "Member function called" << std::endl;
    return this->fixed_value;
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "Member function called" << std::endl;
    this->fixed_value = raw;
}


Fixed::Fixed(const int intVal)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_value = intVal * pow(2, this->fraction);
}

Fixed::Fixed(const float floatVal)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_value = roundf(floatVal * pow(2, this->fraction));
}


float Fixed::toFloat() const
{
	return (float(this->fixed_value) / pow(2, this->fraction));
}


int Fixed::toInt() const
{
	return (this->fixed_value / pow(2, this->fraction));
}



std::ostream &operator<<(std::ostream &output, const Fixed &fixed)
{
	output << fixed.toFloat();
	return (output);
}



