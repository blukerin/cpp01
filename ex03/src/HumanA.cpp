#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& wpon): _name(name), _weapon(wpon) {}

HumanA::~HumanA(void) {}

void  HumanA::setName(std::string name) {
  this->_name = name;
}

void  HumanA::attack(void) {
  std::cout << this->_name << " attacks with their weapon " << this->_weapon.getType() << std::endl;
}