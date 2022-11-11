//
// Created by ely6899 on 11/9/22.
//
#include <stdio.h>
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

int isPalindrome(int n){
    if(n < 10) return 1;
    int Fdigit = 0;
    int Ldigit = 0;
    int digitCount = 0;
    int n2 = n;
    while(n2 > 0)
    {
        n2 /= 10;
        digitCount++;
    }
    for(int i = 1; i <= digitCount/2; i++)
    {
        Ldigit = (n % (int)(pow(10,i)) / (int)(pow(10, i-1)));
        Fdigit = (n / (int)(pow(10, digitCount -i)) % 10);
        printf("L %d F %d \n", Ldigit, Fdigit);
        if(Ldigit != Fdigit) return 0;
    }
    return 1;
}

