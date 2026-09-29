#include "../include/Animal.hpp"
#include "../include/Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor was called\n";
	this->type = "Cat";
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "Cat copy constructor was called\n";
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat '=' operator was called\n";
	this->type = src.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor was called\n";
}

void Cat::makeSound(void) const
{
	std::cout << "meow\n";
}

