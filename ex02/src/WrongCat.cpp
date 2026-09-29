#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor was called\n";
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &src): WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor was called\n";
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	std::cout << "WrongCat '=' operator was called\n";
	this->type = src.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor was called\n";
}

void WrongCat::makeSound(void)const
{
	WrongAnimal::makeSound();
}

