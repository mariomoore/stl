#include "arithmeticAverage.hpp"

#include <cmath>
#include <functional>
#include <numeric>

double ArithmeticAverage(const std::vector<int>& first, const std::vector<int>& second) {
    double result = std::inner_product(first.begin(), first.end(), second.begin(), 0, std::plus<>(), std::plus<>());
    return result / (first.size() * 2);
}

double Distance(const std::vector<int>& first, const std::vector<int>& second) {
    double result = std::inner_product(first.begin(),
                                       first.end(),
                                       second.begin(),
                                       0,
                                       std::plus<>(),
                                       [](auto f, auto s) { return std::pow(f - s, 2); });
    return std::sqrt(result);
}
