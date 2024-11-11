#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int                 _raw;
        const static int    _nb_frac;

    public:
        Fixed();
        Fixed(const Fixed& other);
        ~Fixed();
        int getRawBits(void) const;
        void    setRawBits(int const raw);
};


#endif