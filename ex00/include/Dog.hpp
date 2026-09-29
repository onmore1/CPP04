#ifndef EX00_DOG_HPP
#define EX00_DOG_HPP
#include "Animal.hpp"

class Dog: public Animal
{
	private:

	public:
		Dog();
		Dog(const Dog &src);
		Dog &operator=(const Dog &src);
		~Dog();
		void makeSound(void)const;
};

#endif
