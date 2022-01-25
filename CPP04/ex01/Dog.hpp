#ifndef __DOG_HPP__
# define __DOG_HPP__
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
        private:
                Brain* brain;
        public:
                Dog();
                Dog(const Dog & src);
                virtual ~Dog();
                Dog & operator=(const Dog & rhs);
                void makeSound() const;
};

#endif
