#ifndef PROG3_UNIT2_TEMPLATE_FUNCTION_V2023_1_P1_H
#define PROG3_UNIT2_TEMPLATE_FUNCTION_V2023_1_P1_H

#include <string>
#include <vector>
#include <array>
#include <deque>

namespace utec{
    template <typename Collection>
    int count_char(const Collection& container, char character);
    int count_char(const char* container, char character);
}

#endif //PROG3_UNIT2_TEMPLATE_FUNCTION_V2023_1_P1_H