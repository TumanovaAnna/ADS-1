// Copyright 2022 NNTU-CS
#include <cmath>

bool checkPrime(uint64_t value) {
    for (int i = 2; i < int(sqrt(value)) + 1; i++) {
    for (int i = 2; i < static_cast<int>(sqrt(value)) + 1; i++) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}
uint64_t nPrime(uint64_t n) {
    int tem = 1;
    while (n > 0) {
        tem++;
        if (checkPrime(tem)) {
            n--;
        }
    }
    return tem;
}
uint64_t nextPrime(uint64_t value) {
    int tem = value;
    bool fl = false;
    while (!fl) {
        tmp++;
        if (checkPrime(tem)) {
            fl = true;
        }
    }
    return tem;
}
uint64_t sumPrime(uint64_t hbound) {
    uint64_t s = 0;
    for (int i = 2; i < hbound; i++) {
        if (checkPrime(i)) {
            s += i;
        }
    }
    return sum;
}
