#include <cstdlib>
#include <iostream>

int sum_return_value(int a, int b) {
    return a + b;
}

void sum_reference(int& a, int b) {
    a = a + b;
    b = b + 10;
}

void print_values(int a, int b) {
    std::cout << "a: " << a << " b: " << b << '\n';
}
int main() {
    int a = 3;
    int b = 5;
    int result = sum_return_value(a, b);
    print_values(a, b);
    std::cout << "result: " << result << '\n';
    sum_reference(a, b);
    print_values(a, b);
}


