#ifndef BETTERSED_HPP
# define BETTERSED_HPP

#include <iostream>
#include <string>
#include <fstream>

class BetterSed {
  private:
    std::string _filename;
    std::string _oldString;
    std::string _newString;
    std::size_t _oldStringSize;
    std::size_t _newStringSize;

  public:
    BetterSed(const std::string& filename, const std::string& oldStr, const std::string& newStr);
    ~BetterSed();

    void  newFile();
};

#endif