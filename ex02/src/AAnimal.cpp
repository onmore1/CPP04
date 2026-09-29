#include "../include/AAnimal.hpp"

AAnimal::AAnimal(): type("AAnimal base")
{
	std::cout << "AAnimal default constructor was called\n";
}

AAnimal::AAnimal(const AAnimal &src): type(src.type)
{
	std::cout << "AAnimal copy constructor called\n";
}

AAnimal &AAnimal::operator=(const AAnimal &src)
{
	std::cout << "AAnimal '=' operator was called\n";
	this->type = src.type;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal deconstructor was called\n";
}

std::string AAnimal::getType(void) const
{
	return (this->type);
}