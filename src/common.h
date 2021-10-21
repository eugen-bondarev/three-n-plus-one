#pragma once

#ifndef __COMMON_H__
#define __COMMON_H__

#include <iostream>
#include <typeinfo>

#define LOG_OUT(x) std::cout << x << std::endl
#define VAR_OUT(x) std::cout << typeid(x).name() << " " << #x << " = " << x << std::endl

#include <vector>

using num_t = unsigned long long;
using sequence_t = std::vector<num_t>;

void log_out(const sequence_t& p_sequence)
{
    for (size_t i = 0; i < p_sequence.size(); i++)
    {
        std::cout << p_sequence[i] << ' ';
    }
    std::cout << std::endl << std::endl;
}

#endif