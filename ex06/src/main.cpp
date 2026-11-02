#include "../includes/Harl.hpp"

int main(int argc, char **argv) {
  std::string mssg[4];
  int         level;
  Harl        harl;

  if (argc != 2) {
    std::cerr << "Error\nWrong number of argumens" << std::endl;
    return(1);
  }
  mssg[0] = "DEBUG";
  mssg[1] = "INFO";
  mssg[2] = "WARNING";
  mssg[3] = "ERROR";
  for (int i = 0; i < 4; i++) {
    if (argv[1] == mssg[i]) {
      level = i;
      break ;
    }
  }
  switch (level) {
    case 0:
      std::cout << "[ DEBUG ]" << std::endl;
      harl.complain("DEBUG");
      std::cout << std::endl;
      // fallthrough
    case 1:
      std::cout << "[ INFO ]" << std::endl;
      harl.complain("INFO");
      std::cout << std::endl;
      // fallthrough
    case 2:
      std::cout << "[ WARNING ]" << std::endl;
      harl.complain("WARNING");
      std::cout << std::endl;
      // fallthrough
    case 3:
      std::cout << "[ ERROR ]" << std::endl;
      harl.complain("ERROR");
      std::cout << std::endl;
      break ;
    default:
      std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
      break ;
  }
  return (0);
}
