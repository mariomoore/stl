#include <iostream>
#include <vector>

#include "arithmeticAverage.hpp"

int main()
{
    std::vector<int> first{1, 2, 3, 4};
    std::vector<int> second{1, 2, 3, 4};
    std::cout << "Arithmetic average result: " << ArithmeticAverage(first, second) << "\n";

    std::vector<int> first1{7, 4, 3};
    std::vector<int> second1{17, 6, 2};
    std::cout << "Distance result: " << Distance(first1, second1) << "\n";
    return 0;
}
