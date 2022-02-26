// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value > 1) {
    for (int i = 2; i < value; i++)
      if (value % i == 0)
        return false;
    return true;
  }else
    return false;
}

uint64_t nPrime(uint64_t n) {
  int t = 0;
  while (n != 0) { 
    Prime_n++;
    if (checkPrime(t) == true)
      n--;
  }
  return t;
}

uint64_t nextPrime(uint64_t value) {
  for (int i = 2; i <= value/2; i++)
    if (value % i == 0)
      return false;
  return true;
  while (!nextPrime(value))
    value++;
  return value;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (int i = 2; i < hbound; i++) {
    if (checkPrime(i)) {
      sum += i;
    }
  }
  return sum;
}
