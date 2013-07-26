#include <algorithm>
#include <future>
#include <iostream>
#include <iterator>
#include <vector>

std::string rev(std::string a) {
    std::reverse(std::begin(a), std::end(a));
    return a;
}

int main() {
    std::vector<std::future<std::string>> xs;

    xs.push_back(std::async([]{ return rev(" tae"); }));
    xs.push_back(std::async([]{ return rev(" gnimalf"); }));
    xs.push_back(std::async([]{ return rev("\nhtaed"); }));

    for (auto& x: xs) { std::cout << x.get(); }
}
