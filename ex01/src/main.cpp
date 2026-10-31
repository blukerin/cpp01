#include "../includes/Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int N, std::string name);

int main(void) {
  int n;

  n = 5;
  std::cout << "1. Invoking horde of " << n << " zombies" << std::endl;    
  Zombie* horde = zombieHorde(n, "Frank");
  if (!horde) {
    std::cout << "Error allocating the horde." << std::endl;
    return (1);
  }
  std::cout << "\n2. Pasando lista a la horda" << std::endl;
    
  for (int i = 0; i < n; i++) {
    std::cout << "Zombie [" << i << "]: ";
    horde[i].announce();
  }
  std::cout << "\n3. Deleting the horde" << std::endl;
  delete[] horde;

  std::cout << "\nFin del programa" << std::endl;
  return (0);
}