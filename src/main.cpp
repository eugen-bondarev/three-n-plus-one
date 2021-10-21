#include "common.h"

bool is_even(const num_t p_num) {
    return p_num % 2 == 0;
}

bool is_odd(const num_t p_num) {
    return !is_even(p_num);
}

num_t three_n_plus_one(const num_t p_n) {
    return p_n * 3 + 1;
}

num_t n_over_two(const num_t p_n) {
    return p_n / 2;
}

sequence_t create_sequence(const num_t p_start) {
    num_t current{p_start};
    sequence_t result{current};

    while (current != 1) {
        if (is_even(current)) {
            current = n_over_two(current);
        }
        else {
            current = three_n_plus_one(current);
        }

        result.push_back(current);
    }
    
    return result;
}

int main() {
    sequence_t sequence_0 = create_sequence(27);

    log_out(sequence_0);

    return 0;
}