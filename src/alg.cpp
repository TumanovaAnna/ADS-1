#include <cstdint>
#include "alg.h"
bool checkPrime(uint64_t value) {
  if (value <= 1)
    return false;
  for (int i = 2; i <= value/2; i++) {
    if (value % i == 0)
      return false;
  }
  return true;
}
uint64_t nPrime(uint64_t n) {
  uint64_t num = 0;
  uint64_t num1 = 0;
  while (n > 0) {
    if (checkPrime(num) == true) {
      num1 = num;
      --n;
    }
    ++num;
  }
  return num1;
}
uint64_t nextPrime(uint64_t value) {
  while (true) {
    value++;
    if (checkPrime(value)) {
      return value;
    }
  }
}
uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  uint64_t newhb;
  newhb = hbound - 1;
  while (newhb > 0) {
    if (checkPrime(newhb) == true) {
      sum += newhb;
    }
    --newhb;
  }
  return sum;
}
