#include <algorithm>
#include <future>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

string rev(string a) {
    reverse(begin(a), end(a));
    return a;
}

int main() {
    vector<future<string>> xs;

    xs.push_back(async([]{ return rev(" tae"); }));
    xs.push_back(async([]{ return rev(" gnimalf"); }));
    xs.push_back(async([]{ return rev("\nhtaed"); }));

    for (auto& x: xs) { cout << x.get(); }
}
