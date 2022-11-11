//
// Created by ely6899 on 11/9/22.
//

#include <math.h>

/*
 * Checks whenever candidate param is considered an armstrong number.
 * */
int isArmstrong(int candidate){
    if(candidate < 0)
        return 0;
    if(candidate == 0 || candidate == 1)
        return 1;

    int modulu;
    int splitIndex = 1;
    int numberLength = 0;
    int temp = candidate;

    while(temp > 0){
        temp /= 10;
        ++numberLength;
    }

    int sumOfDigits = 0;
    int digit;

    while(modulu != candidate){
        modulu = (candidate % (int)pow(10, splitIndex));
        digit = modulu / (int)pow(10,splitIndex - 1);
        sumOfDigits += (int)pow(digit, numberLength);
        ++splitIndex;
    }
    return sumOfDigits == candidate ? 1 : 0;
}

int isPalindrome(int candidate){

    }

