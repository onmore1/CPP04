#ifndef EX00_WRONGANIMAL_HPP
#define EX00_WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &src);
		WrongAnimal &operator=(const WrongAnimal &src);
		virtual ~WrongAnimal();
		void makeSound(void) const;
		std::string getType(void)const;
};

#endif