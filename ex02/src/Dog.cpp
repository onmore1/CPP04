#include "../include/AAnimal.hpp"
#include "../include/Dog.hpp"
 
Dog::Dog()
{
	std::cout << "Dog default constructor was called + creating a brain\n";
	this->type = "Dog";
	this->d_brain = new Brain();
}


Dog::Dog(const Dog &src): AAnimal(src), d_brain(new Brain(*src.d_brain))
{
	std::cout << "Dog copy constructor was called + creating a brain\n";
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog '=' operator was called\n";
	if (this != &src)
	{
		AAnimal::operator=(src);
		*this->d_brain = *src.d_brain;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor was called + deleting dog brain\n";
	delete (this->d_brain);
}

void Dog::makeSound(void) const
{
	std::cout << "*barking*\n";
}

std::string Dog::getIdea(int index) const
{
	return this->d_brain->getIdea(index);
}

