#ifndef FIXED_H
#define FIXED_H


class Fixed
{
    private:
        int fixed_value;
        static const int fraction;
    public:
        Fixed(/* args */);
        Fixed(Fixed &cpy);
        Fixed& operator = (Fixed &cpy);
        int getRawBits(void) const;
        void setRawBits( int const raw );
        ~Fixed();
};


#endif