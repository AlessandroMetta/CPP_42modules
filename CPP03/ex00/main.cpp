#include "ClapTrap.hpp"
# include <iostream>

int main( void )
{
    ClapTrap a( "Test" );
    a.attack( "Test1" );
    a.takeDamage( 8 );
    std::cout << a;
    a.beRepaired( 10 );
    std::cout << a;
    a.takeDamage( 8 );
    std::cout << a;
    return 0;
}