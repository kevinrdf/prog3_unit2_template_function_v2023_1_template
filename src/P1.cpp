#include <iostream>
#include <algorithm>
#include "P1.h"
using namespace std;

namespace utec{

    template <typename Collection>
    int count_char(const Collection& container, char character) {
        int count = 0;
        char lowerChar = tolower(character);

        for (const auto& elem : container) {
            if (tolower(static_cast<char>(elem)) == lowerChar) {
                ++count;
            }
        }
        return count;
    }

    int count_char(const char* container, char character) {
        int count = 0;
        char lowerChar = stolower(character);

        while (*container != '\0') {
            if (tolower(*container) == lowerChar) {
                ++count;
            }
            ++container;
        }
        return count;
    }

    template int count_char<vector<char>>(const vector<char>&, char);
    template int count_char<string>(const string&, char);
    template int count_char<deque<char>>(const deque<char>&, char);
    template int count_char<array<char, 19>>(const array<char, 19>&, char);
}