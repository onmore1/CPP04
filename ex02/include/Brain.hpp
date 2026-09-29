#ifndef EX02_BRAIN_HPP
#define EX02_BRAIN_HPP
#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &src);
		virtual ~Brain();
		Brain &operator=(const Brain &src);
		void setIdeas();
		void setIdea(std::string &idea);
		std::string getIdea(int n) const;
};

#endif