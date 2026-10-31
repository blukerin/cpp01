  #include <iostream>
  #include <string>

  int main(void) {
    std::string   str;
    std::string*  stringPTR;
    std::string&  stringREF = str;

    str = "HI THIS IS BRAIN";
    stringPTR = &str;
    stringREF = str;

    std::cout << "String memory address of the string: " << &str <<std::endl;
    std::cout << "Memory addres held by the pointer: " << stringPTR << std::endl;
    std::cout << "Memory addres held by the reference: " << &stringREF << std::endl;

    std::cout << "\nValue of the string variable: " << str << std::endl;
    std::cout << "Value pointed to by pointer: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by reference: " << stringREF << std::endl;

    return (0);
  }