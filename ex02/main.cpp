#include "include/Cat.hpp"
#include "include/Dog.hpp"
#include "include/WrongAnimal.hpp"
#include "include/WrongCat.hpp"
#include "include/Brain.hpp"
#include <string>
int main()
{
	const AAnimal* animal = new Dog();
	Dog* dog = new Dog();
	Cat* cat = new Cat();
	AAnimal* animals[10];
	std::cout << "-------------------(creating Dogs)\n";
	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();
	std::cout << "-------------------(creating Cats)\n";
	for (int i = 5; i < 10; i++)
		animals[i] = new Cat();
	std::cout << "-------------------(checking sound)\n";
	for (int i = 0; i < 10; i++)
		animals[i]->makeSound();
	std::cout << "-------------------(check type)\n";
	std::cout << animal->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << "-------------------(ideas)\n";
	std::cout << dog->getType() << ": " << dog->getIdea(0) << std::endl;
	std::cout << cat->getType() << ": " << cat->getIdea(0) << std::endl;
	std::cout << "-------------------(checking sound)\n";
	dog->makeSound();
	cat->makeSound();
	animal->makeSound();
	std::cout << "-------------------\n";
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << wrongCat->getType() << std::endl;
	wrongCat->makeSound();
	std::cout << "-------------------\n";
	Brain brain;
	brain.setIdeas();
	for (int i = 0; i < 101; i++)
		std::cout << "(" << i << ") " << brain.getIdea(i) << "\n";
	std::cout << "-------------------(copy constructors)\n";
	Dog dogCopy(*dog);
	Cat catCopy(*cat);
	std::cout << "-------------------(assigning\n";
	Dog dogAssigned;
	dogAssigned = *dog;
	Cat catAssigned;
	catAssigned = *cat;
	delete dog;
	delete cat;
	std::cout << dogCopy.getIdea(0) << std::endl;
	std::cout << dogAssigned.getIdea(0) << std::endl;
	std::cout << catCopy.getIdea(0) << std::endl;
	std::cout << catAssigned.getIdea(0) << std::endl;
	std::cout << "-------------------(deleting)\n";
	delete animal;
	delete wrongCat;
	std::cout << "-------------------(deleting animals)\n";
	for (int i = 0; i < 10; i++)
		delete animals[i];
	return 0;
}