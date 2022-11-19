//
// Created by ely6899 on 11/9/22.
//

#include <math.h>

int digitCount(int n){
    int digCount = 0;
    while(n > 0){
        n/=10;
        digCount++;
    }
    return digCount;
}

/*
 * Checks whenever candidate param is prime.
 * */

int isPrime(int n){
    // Corner case
    if (n <= 0)
        return 0;

    if(n == 1)
        return 1;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

/*
 * Checks whenever candidate param is considered a strong number.
 * */

int isStrong(int n){
    //Corner case
    if(n <= 0)
        return 0;

    if(n == 1)
        return 1;

    int splitIndex = 1;
    int modulu, digit;

    unsigned long long factorial = 1LL, sumOfDigits = 0LL;
    //Checks for each digit
    while(modulu != n){
        modulu = (n % (int)pow(10, splitIndex));
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
    return sumOfDigits == n ? 1 : 0;


}
