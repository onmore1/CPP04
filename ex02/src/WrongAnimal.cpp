#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal base")
{
	std::cout << "WrongAnimal default constructor was called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &src): type(src.type)
{
	std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << "WrongAnimal '=' operator was called\n";
	this->type = src.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal deconstructor was called\n";
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "wrong weird noises\n";
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}