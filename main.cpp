#include <memory>
#include"UniquePtr.hpp"
#include <memory>
#include <iostream>

int main() {
    
    std::unique_ptr<int> i = std::make_unique<int>(5);
    std::cout << *i << '\n';
    std::cout << &i << '\n';
    //std::cout << i << '\n';
    return 0;
}
