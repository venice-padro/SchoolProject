#include <iostream>
#include <cstdlib>

int main() {
    int num = rand() % 10 + 1;
    std::cout << "Random number: " << num << std::endl;
    return 0;
}
