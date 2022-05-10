#include <iostream>
#include "parser.hpp"


int main() {

    std::cout << "\e[32m---ENTERING MAIN---\e[0m" << std::endl;

    std::cout << "ENTER FILE TO PARSE: ";
    std::string filename;
    std::cin >> filename;

    Parser *test_parse = new Parser;
    test_parse->name = filename;

    if (test_parse->read(filename) != 0) { return EXIT_FAILURE;};


    std::cout << test_parse << std::endl;
    
    std::cout << "\e[32m---EXITING MAIN---\e[0m" << std::endl;
    return 0;
}