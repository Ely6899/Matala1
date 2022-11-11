//
// Created by ely6899 on 11/9/22.
//
#include <math.h>
#include <stdio.h>

/*
 * Checks whenever candidate param is prime.
 * */

int isPrime(int candidate){
    // Corner case
    if (candidate <= 1)
        return 0;

    if(candidate == 2)
        return 1;

    // Check from 2 to square root of n
    int squareRoot = (int)sqrt(candidate);
    for (int i = 2; i <= squareRoot; i++)
        if (candidate % i == 0)
            return 0;

    return 1;
}

/*
 * Checks whenever candidate param is considered a strong number.
 * */

int isStrong(int candidate){
    //Corner case
    if(candidate <= 0)
        return 0;

    int splitIndex = 1;
    int modulu, digit;

    unsigned long long factorial = 1LL, sumOfDigits = 0LL;
    //Checks for each digit
    while(modulu != candidate){
        modulu = (candidate % (int)pow(10, splitIndex));
        digit =  modulu / (int)pow(10, splitIndex-1);
        if(digit == 0 || digit == 1)
            sumOfDigits += 1;
        else{
            for(int i = 2; i <= digit; i++){
                factorial *= i;
            }
            sumOfDigits += factorial;
            factorial = 1LL;
        }
        ++splitIndex;
    }
    return sumOfDigits == candidate ? 1 : 0;


}
