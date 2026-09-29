#include "include/Cat.hpp"
#include "include/Dog.hpp"

int main()
{
	Animal* animals[4];
	for (int i = 0; i < 2; i++)
		animals[i] = new Dog();
	std::cout << "------------------\n";
	for (int i = 2; i < 4; i++)
		animals[i] = new Cat();
	std::cout << "------------------\n";
	for (int i = 0; i < 4; i++)
	{
		std::cout << animals[i]->getType() << ": ";
		animals[i]->makeSound();
	}
	std::cout << "------------------\n";
	for (int i = 0; i < 4; i++)
		delete animals[i];
	std::cout << "------------------\n";
	Dog* dog = new Dog();
	Cat* cat = new Cat();
	Animal* justAnimal = new Animal();
	std::cout << "------------------(copies)\n";
	Dog dogCopy(*dog);
	Cat catCopy(*cat);
	Dog dogAssigned;
	Cat catAssigned;
	std::cout << "------------------(assigning operator)\n";
	dogAssigned = *dog;
	catAssigned = *cat;
	std::cout << "------------------(deconstructors)\n";
	delete dog;
	delete cat;
	delete justAnimal;
	return (0);
}