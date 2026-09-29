#include "../include/Brain.hpp"
#include <math.h>

Brain::Brain()
{
	std::cout << "Brain default constructor was called\n";
	this->setIdeas();
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copy constructor was called\n";
	for (int index = 0; index < 100; index++)
		this->ideas[index] = src.ideas[index];
}

Brain &Brain::operator=(const Brain &src)
{
	std::cout << "Brain '=' operator was called\n";
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = src.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor was called + deleting ideas\n";
}

std::string Brain::getIdea(int n) const
{
	if (n >= 100 || n < 0)
		return ("empty part of brain");
	return this->ideas[n];
}

void Brain::setIdeas()
{
	for (int i = 0; i < 100; i++)
		Brain::setIdea(this->ideas[i]);
}

void Brain::setIdea(std::string &idea)
{
	std::string feelings[10] = {"I love" , "I hate" , "I create" , "I want" , "I see" , "I find" , "I like" , "I destroy" , "I need" , "I consume"};
	std::string things[10] = {"fruits", "vegatables", "stones", "fire", "water", "gold", "stars", "trees", "clouds", "nothing"};
	idea = feelings[rand() % 10] + " " + things[rand() % 10];
}