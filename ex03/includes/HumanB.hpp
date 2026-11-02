#ifndef HUMANB_HPP
# define HUMANB_HPPB
#include "Weapon.hpp"

class HumanB {
  private:
    std::string _name;
    Weapon*   _weapon;

  public:
    HumanB(std::string name);
    ~HumanB();

    void  setName(std::string name);
    void  setWeapon(Weapon& wpon);

    void  attack(void);
};

#endif