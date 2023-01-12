#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
    this->fixed_value = 0;
    this->fraction = 8;
    std::cout << "Constructer called" << std::endl;
}

Fixed::Fixed(Fixed &other)
{
    *this = other;
    std::cout << "Copy constructer called" << std::endl;
}

Fixed& Fixed::operator= (Fixed &other)
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
