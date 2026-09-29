#ifndef EX02_CAT_HPP
#define EX02_CAT_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
	private:
		Brain *c_brain;
	public:
		Cat();
		Cat(const Cat &src);
		Cat &operator=(const Cat &src);
		~Cat();
		void makeSound(void)const;
		std::string getIdea(int index) const;
};

#endif
