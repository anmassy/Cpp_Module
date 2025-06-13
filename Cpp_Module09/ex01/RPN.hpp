#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <sstream>
#include <stack>

class RPN
{
	private:
		std::stack<int> _stack;
	
	public:
		RPN();
		RPN(const RPN& other);
		RPN& operator=(const RPN& other);
		~RPN();

		void calculate(const std::string& expression);
		int getResult() const;

		class invalidArgument : public std::exception
		{
			public:
				const char *what(void) const throw();
		};

		class emptyStack : public std::exception
		{
			public:
				const char *what(void) const throw();
		};

		class divisionByZero : public std::exception
		{
			public:
				const char *what(void) const throw();
		};
};

#endif