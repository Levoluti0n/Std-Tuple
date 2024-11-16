#include <iostream>
#include "tuple.hpp"
#include "get.hpp"

int main() {
    auto tuple = makeTuple(42, 3.14, 3.14, std::string("C++ Project"));

    std::cout << "First element: " << get<0>(tuple) << "\n";
    std::cout << "Second element: " << get<1>(tuple) << "\n";
    std::cout << "Third element: " << get<2>(tuple) << "\n";
    std::cout << "Fourth element: " << get<3>(tuple) << "\n";

    return 0;
}