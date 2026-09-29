#include "../include/Animal.hpp"
#include "../include/Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Dog default constructor was called\n";
	this->type = "Dog";
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog copy constructor was called\n";
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog '=' operator was called\n";
	this->type = src.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor was called\n";
}

void Dog::makeSound(void) const
{
	std::cout << "*barking*\n";
}

