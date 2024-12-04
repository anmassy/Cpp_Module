#include "iter.hpp"

template<typename T>
void iter(T *tab, int len, void (*f)(T &val)) {
	int i = -1;

	while (++i < len) {
		f(tab[i]);
	}
}

template<typename T>
void print(T &val) {
	std::cout << val;
}

int main( void ) {

	char	tab[] = {'a', 'b', 'c'};

	iter(tab, 3, print<char>);
	return 0;
}
