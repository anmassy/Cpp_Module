#include "easyfind.hpp"
#include <vector>
#include <list>

int main() {
    try {
        std::vector<int> vec = {1, 2, 3, 4, 5};
        std::cout << "Trouvé : " << *easyfind(vec, 3) << std::endl;

        std::list<int> lst = {10, 20, 30, 40};
        std::cout << "Trouvé : " << *easyfind(lst, 20) << std::endl;

        // Essai avec un élément non présent
        std::cout << "Trouvé : " << *easyfind(vec, 100) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    return 0;
}


