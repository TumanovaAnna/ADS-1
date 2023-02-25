// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
bool checkPrime(uint64_t value) {
  if (value <= 1)
    return false;
  for (int i=2; i*i<= value; i++) {
    if (value % i == 0)
      return false;
  }
  return true;
}
uint64_t nPrime(uint64_t n) {
  uint64_t num=0;
  uint64_t nomer=0;
  while (n > 0) {
    
    if (checkPrime(chislo)==1) {
      nomer=num;
      --n;
    }
    ++num;
  }
  return nomer;
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
  uint64_t summ =0;
  hbound = hbound-1;
  while (hbound>0) {
    if (checkPrime(hbound)) {
      summ = summ+hbound;
    }
    --hbound;
  }
  return summ;
}
