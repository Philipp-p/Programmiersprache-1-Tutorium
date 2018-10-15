#include <iostream>

int main() {
    int a = 1;
    int b = 2;
    
    if (a & b)
        std::cout << "a & b is true" << std::endl;
    if (a && b)
        std::cout << "a && b is true" << std::endl;
    
    return EXIT_SUCCESS;
}
