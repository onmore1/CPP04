#ifndef EX01_CAT_HPP
#define EX01_CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
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
