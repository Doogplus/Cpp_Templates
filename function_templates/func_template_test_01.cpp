//
// Created by doolplus on 22-7-2.
//

#include <iostream>
#include <string>

template <typename T>
T max(T a, T b) {
    return b < a ? a : b;
}

int main() {
    std::cout << ::max(1, 3);       // 3
    std::cout << ::max(1.0, 3.14);  // 3.14
    std::string s1 = "mathematics";
    std::string s2 = "math";
    std::cout << ::max(s1, s2);  // mathematics
}