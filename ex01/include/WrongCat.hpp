#ifndef EX01_WRONGCAT_HPP
#define EX01_WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	private:

	public:
		WrongCat();
		WrongCat(const WrongCat &src);
		WrongCat &operator=(const WrongCat &src);
		~WrongCat();
		void makeSound(void)const;
};

#endif
