#include "make_random_vector.hpp"
#include <cmath>
#include <iostream>
using namespace std;

template < typename ConstIt, typename Comp >
std::vector< size_t > sorted_indices(ConstIt first, ConstIt last, Comp compare)
{
  
}

int main()
{
    auto w1 = make_random_vector< int >(10, 0, 9);
    // wypisuje wektor
    cout << "Input:  ";
    for (auto it = w1.begin(); it != w1.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    if (*find(w1.begin(), w1.end(), 6) == 6) {
        auto it2 = partition(w1.begin(), w1.end(), [](int a) { return a > 6; });
        sort(w1.begin(), it2);
    }
    else
        cout << "Nie znaleziono 6" << endl;

    // znowu wypisuje
    cout << "Output: ";
    for (auto it = w1.begin(); it != w1.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}