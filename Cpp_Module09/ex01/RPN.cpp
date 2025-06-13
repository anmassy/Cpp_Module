#include "RPN.hpp"

RPN::RPN()
{
	// Constructor implementation
}
RPN::RPN(const RPN& other) : _stack(other._stack)
{
	// Copy constructor implementation
}

RPN& RPN::operator=(const RPN& other)
{
	if (this != &other)
	{
		_stack = other._stack;
	}
	return *this;
}

RPN::~RPN()
{
	// Destructor implementation
}

int RPN::getResult() const
{
	if (_stack.empty())
		throw emptyStack();
	else if (_stack.size() > 1)
		throw invalidArgument();
	return _stack.top();
}

void RPN::calculate(const std::string& expression)
{
	std::istringstream iss(expression);
	std::string token;

	while (iss >> token)
	{
		if (token.size() == 1 && std::string("+-/*").find(token) != std::string::npos)
		{
			if (_stack.size() < 2) {
				throw emptyStack();
			}
			
			int result = 0;
			int b = _stack.top();
			_stack.pop();
			int a = _stack.top();
			_stack.pop();
			if (token == "+")
				result = a + b;
			else if (token == "-")
				result = a - b;
			else if (token == "*")
				result = a * b;
			else if (token == "/")
			{
				if (b == 0)
					throw divisionByZero();
				result = a / b;
			}
			_stack.push(result);
		}
		else if (isdigit(token[0]) && token.size() == 1)
			_stack.push(token[0] - '0');
		else
			throw invalidArgument();
	}
	if (_stack.size() != 1)
		throw invalidArgument();
	_stack.top();
}

const char* RPN::invalidArgument::what() const throw()
{
	return "Invalid argument";
}

const char* RPN::emptyStack::what() const throw()
{
	return "Empty stack";
}

const char* RPN::divisionByZero::what() const throw()
{
	return "Division by zero";
}

