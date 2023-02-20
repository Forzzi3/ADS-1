// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
  for (uint64_t i = 2; i <= value-1; i++)
    if (value % i == 0)
      return false;
  return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
  uint64_t otvet;
  uint64_t end_num = 18446744073709551615;
  uint64_t count = 0;
  for (int ch = 2; ch <= end_num; ch++)
	{
    if (count == n)
      break;
    else
    {
      bool isPrime = 1;
      for (uint64_t i = 2; i <= ch-1; i++)
      {
        if (ch % i == 0)
        {
          isPrime = 0;
          break;
        }
      }
      if (isPrime) {
        otvet = ch;
        count++;
      }
    }
  }
  return otvet;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
  uint64_t end_num = 18446744073709551615;
  for (uint64_t val = value+1;val <= end_num; val++)
  {
    bool isPrime = 1;
    for (uint64_t i = 2; i <= val-1; i++)
    {
      if (val % i == 0)
      {
        isPrime = 0;
        break;
      }
    }
    if (isPrime)
      return val;
  }
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  uint64_t summ = 0;
  for (uint64_t ch=2; ch < hbound; ch++)
  {
    bool isPrime = 1;
    for (uint64_t i = 2; i < ch; i++)
    {
      if (ch % i == 0)
      {
        isPrime = 0;
        break;
      }
    }
    if (isPrime)
      summ += ch;
  }
  return summ;
}
