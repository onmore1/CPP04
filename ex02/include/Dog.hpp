#ifndef EX02_DOG_HPP
#define EX02_DOG_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
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
