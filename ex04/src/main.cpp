#include "../includes/BetterSed.hpp"

int main(int argc, char **argv) {
  if (argc == 4) {
    BetterSed sed(argv[1], argv[2], argv[3]);
    sed.newFile();
  }
  else
    std::cerr << "Error\nWrong number of arguments" << std::endl;
  return (0);
}
