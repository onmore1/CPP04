#ifndef EX00_CAT_HPP
#define EX00_CAT_HPP
#include "Animal.hpp"

class Cat: public Animal
{
	private:

	public:
		Cat();
		Cat(const Cat &src);
		Cat &operator=(const Cat &src);
		~Cat();
		void makeSound(void)const;
};

#endif
