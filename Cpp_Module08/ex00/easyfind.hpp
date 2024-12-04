#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>  // Pour std::find
#include <vector>     // Exemple de conteneur
#include <list>       // Exemple avec list
#include <exception>  // Pour std::exception

// Fonction template easyfind
template <typename T>
typename T::iterator easyfind(T& container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end()) {
        throw std::runtime_error("Valeur non trouvée dans le conteneur");
    }
    return it;
}

#endif