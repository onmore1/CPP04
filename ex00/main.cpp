#include "include/Cat.hpp"
#include "include/Dog.hpp"
#include "include/WrongAnimal.hpp"
#include "include/WrongCat.hpp"

int main()
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << "-------------------\n";
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << "-------------------\n";
	dog->makeSound();
	cat->makeSound();
	animal->makeSound();
	std::cout << "-------------------\n";
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << wrongCat->getType() << std::endl;
	wrongCat->makeSound();
	std::cout << "-------------------\n";
	delete animal;
	delete dog;
	delete cat;
	delete wrongCat;
	return 0;
}