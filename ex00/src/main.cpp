#include "../includes/Zombie.hpp"

void  randomChump(std::string name);
Zombie* newZombie(std::string name);

int main(void) {
    std::cout << "1. Creando un Zombie en el Heap" << std::endl;
    
    Zombie* heapZombie = new Zombie("Frankenstein");
    heapZombie->announce();

    std::cout << "\n2. Creando un Zombie en el Stack" << std::endl;
    randomChump("Bitey");

    std::cout << "\n--- 3. Limpiando el Heap ---" << std::endl;
    delete heapZombie;

    std::cout << "\n--- Fin del programa ---" << std::endl;
    
    return 0;
}