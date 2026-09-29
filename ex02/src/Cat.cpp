#include "../include/AAnimal.hpp"
#include "../include/Cat.hpp"
 
Cat::Cat()
{
	std::cout << "Cat default constructor was called + creating a brain\n";
	this->type = "Cat";
	this->c_brain = new Brain();
}

Cat::Cat(const Cat &src): AAnimal(src), c_brain(new Brain(*src.c_brain))
{
	std::cout << "Cat copy constructor was called + creating a brain\n";
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat '=' operator was called\n";
	if (this != &src)
	{
		AAnimal::operator=(src);
		*this->c_brain = *src.c_brain;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor was called + deleting Cat brain\n";
	delete (this->c_brain);
}

void Cat::makeSound(void) const
{
	std::cout << "*meow*\n";
}

std::string Cat::getIdea(int index) const
{
	return this->c_brain->getIdea(index);
}

