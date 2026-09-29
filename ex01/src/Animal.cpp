#include "../include/Animal.hpp"

Animal::Animal(): type("animal base")
{
	std::cout << "Animal default constructor was called\n";
}

Animal::Animal(const Animal &src): type(src.type)
{
	std::cout << "Animal copy constructor called\n";
}

Animal &Animal::operator=(const Animal &src)
{
	std::cout << "Animal '=' operator was called\n";
	this->type = src.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal deconstructor was called\n";
}

void Animal::makeSound(void) const
{
	std::cout << "weird noises\n";
}

std::string Animal::getType(void) const
{
	return (this->type);
}