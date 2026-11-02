#include "../includes/BetterSed.hpp"

BetterSed::BetterSed(const std::string& filename, const std::string& old, const std::string& newStr)
  : _filename(filename), _oldString(old), _newString(newStr) {
  this->_oldStringSize = old.length();
  this->_newStringSize = newStr.length();
}

BetterSed::~BetterSed(){}

void  BetterSed::newFile() {
  std::ifstream ifs(this->_filename.c_str());
  std::ofstream ofs((this->_filename + ".replace").c_str());
  std::string   str;
  std::size_t   occ;

  if (!ifs.is_open() || !ofs.is_open()) {
    std::cerr << "Error\nFailed opening the file" << std::endl;
    return ;
  }
  while (std::getline(ifs, str)) {
    occ = 0;
    while ((occ = str.find(this->_oldString, occ)) != std::string::npos) {
      str = str.substr(0, occ) + this->_newString + str.substr(occ + this->_oldStringSize);
      occ += this->_newStringSize;
    }
    ofs << str << std::endl;
  }
  ifs.close();
  ofs.close();
}
