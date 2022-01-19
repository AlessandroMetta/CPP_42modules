#ifndef __FIXED_POINT_HPP__
# define __FIXED_POINT_HPP__
# include <iostream>

class FixedPoint {
    private:
        int value;
        int static const bit = 8;
    public:
        FixedPoint( void );
        FixedPoint( FixedPoint const & src );
        ~FixedPoint();
        FixedPoint & operator=(FixedPoint const & rhs);
        int getRawBits( void ) const;
        void setRawBits( int const raw ); 
};

#endif