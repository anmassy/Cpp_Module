#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) {
	int roulette = rand() % 3;

	if (roulette == 0)
		return (new A);
	else if (roulette == 1)
		return (new B);
	else if (roulette == 2)
		return (new C);
	else
		return (NULL); 
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "???" << std::endl;
}

void identify(Base& p) {
	try {
		if (dynamic_cast<A*>(&p))
			std::cout << "A" << std::endl;
		else if (dynamic_cast<B*>(&p))
			std::cout << "B" << std::endl;
		else if (dynamic_cast<C*>(&p))
			std::cout << "C" << std::endl;
	}
	catch (std::bad_cast& e) {
		std::cout << "???" << std::endl;
	}
}

int main() {


	srand(time(NULL));
	Base* random;

	random = generate();
	std::cout << "Identification avec un pointeur : ";
	identify(random);
	std::cout << "Identification avec une référence : ";
	identify(*random);
	delete random;

	random = generate();
	std::cout << "Identification avec un pointeur : ";
	identify(random);
	std::cout << "Identification avec une référence : ";
	identify(*random);
	delete random;

	random = generate();
	std::cout << "Identification avec un pointeur : ";
	identify(random);
	std::cout << "Identification avec une référence : ";
	identify(*random);
	delete random;

	return (0);
}