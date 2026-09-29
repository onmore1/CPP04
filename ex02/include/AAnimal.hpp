#ifndef EX02_AANIMAL_HPP
#define EX02_AANIMAL_HPP
#include <iostream>

class AAnimal {
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(const AAnimal &src);
		AAnimal &operator=(const AAnimal &src);
		virtual ~AAnimal();
		virtual void makeSound(void) const = 0; //pure virtual. each child needs to provide own implementaion
		std::string getType(void)const;
};

#endif