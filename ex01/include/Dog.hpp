#ifndef EX01_DOG_HPP
#define EX01_DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *d_brain;
	public:
		Dog();
		Dog(const Dog &src);
		Dog &operator=(const Dog &src);
		~Dog();
		void makeSound(void)const;
		std::string getIdea(int index) const;
};

#endif
