#include <cstdint>
#include "alg.h"
bool checkPrime(uint64_t value) {
    uint64_t k = 0;
    for (uint64_t i = 2; i <= (value / 2); i++) {
        if (value % i == 0) 
        return false;
    }
    return true;
}
uint64_t nPrime(uint64_t n) {
    uint64_t a = 1;
    uint64_t num = 0;
    while (num != n) {
        a++;
        if (checkPrime(otvet) == true) num++;
    }
    return a;
}
uint64_t nextPrime(uint64_t value) {
    uint64_t b = 0;
    while (b == 0) {
        value++;
        if (checkPrime(value) == true) {
            b = 1;
            return value;
        }
    }
    return value;
}
uint64_t sumPrime(uint64_t hbound) {
    uint64_t num1 = 2;
    uint64_t c = 0;
    while (num1 < hbound) {
        if (checkPrime(num1) == true) c += num1;
        num1++;
    }
    return c;
}
