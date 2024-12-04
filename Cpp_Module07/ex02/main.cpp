#include "Array.hpp"

template<typename T>
Array<T>::Array(void) : _array(new T[0]), _size(0) {}

template<typename T>
Array<T>::Array(unsigned int n) {
	this->_array = new T[n];
	this->_size = n;
}

template<typename T>
Array<T>::Array(Array const &copy) {
	int i = 0;

	this->_array = new T[copy.size()]();
	this->_size = copy.size();
	while (i < this->size()) {
		this->_array[i] = copy._array[i];
		i++;
	}
}

template<typename T>
Array<T>::~Array() {
	delete [] this->_array;
}

template<typename T>
Array<T>	&Array<T>::operator=(Array<T> const &rhs) {
	if (this != &rhs) {
		int i = 0;

		delete [] this ->_array;
		this->_array = new T[rhs.size()];
		this->_size = rhs.size();
		while (i < this->size()) {
			this->_array[i] = rhs._array[i];
			i++;
		}
	}
	return (*this);
}

template<typename T>
T	&Array<T>::operator[](unsigned int index) {
	if (index >= this->_size) {
		throw std::out_of_range("Index hors des limites");
	}
	return this->_array[index];
}

template<typename T>
int Array<T>::size(void) const {
	return (this->_size);
}


int main() {
	try {
		// Créer un tableau de 5 entiers
		Array<int> intArray(5);

		// Remplir le tableau avec des valeurs
		for (unsigned int i = 0; i < intArray.size(); ++i) {
			intArray[i] = i * 10; // Remplir avec des multiples de 10
		}

		// Afficher les éléments du tableau
		std::cout << "Contenu du tableau : ";
		for (unsigned int i = 0; i < intArray.size(); ++i) {
			std::cout << intArray[i] << " "; // Affiche chaque élément
		}
		std::cout << std::endl;

		// Tester la copie
		Array<int> copiedArray = intArray; // Utilisation de l'opérateur de copie
		std::cout << "Contenu du tableau copié : ";
		for (unsigned int i = 0; i < copiedArray.size(); ++i) {
			std::cout << copiedArray[i] << " ";
		}
		std::cout << std::endl;

		// Tester la gestion des exceptions
		std::cout << "Tentative d'accès à un index hors limites : " << std::endl;
		std::cout << "Valeur à l'index 10 : " << intArray[10] << std::endl; // Cela devrait lancer une exception

	} catch (const std::out_of_range& e) {
		std::cerr << "Erreur : " << e.what() << std::endl; // Gérer l'exception pour l'index hors limites
	}

	return 0;
}
