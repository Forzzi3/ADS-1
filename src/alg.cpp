// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    for (uint64_t i = 2; i <= value-1; i++)
        if (value % i == 0)
            return false;
    return true;
}

uint64_t nPrime(uint64_t n) {
    uint64_t otvet;
    uint64_t count = 0;
    uint64_t ch = 1;
    while (count != n) {
        ch++;
        bool isPrime = 1;
        for (uint64_t i = 2; i < ch; i++)
            if (ch % i == 0) {
                isPrime = 0;
                break;
            }
        if (isPrime) {
            otvet = ch;
            count++;
        }
    }
    return otvet;
}

uint64_t nextPrime(uint64_t value) {
    int isPrime;
    while (1) {
        value++;
        isPrime = 1;
        for (int i=2; i < value; i++)
            if (value % i == 0) {
                isPrime = 0;
                break;
            }
        if (isPrime == 1)
            break;
    }
    return value;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t summ = 0;
    for (uint64_t ch=2; ch < hbound; ch++) {
        bool isPrime = 1;
        for (uint64_t i = 2; i < ch; i++) {
            if (ch % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            summ += ch;
    }
    return summ;
}
