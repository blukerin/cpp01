#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name) {
  this->_name = name;
  this->_weapon = NULL;
}

HumanB::~HumanB(void) {}

void  HumanB::setWeapon(Weapon& weapon) {
  this->_weapon = &weapon;
}

void  HumanB::setName(std::string name) {
  this->_name = name;
}

void  HumanB::attack(void) {
  std::cout << this->_name << " attacks with their weapon " << this->_weapon->getType() << std::endl;
}