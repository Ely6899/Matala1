//
// Created by ely6899 on 11/13/22.
//

#include <math.h>

extern int digitCount(int n);
int reverseNum(int n);
int sumStrong(int n, int a);


int isArmstrong(int n){
    return (n == sumStrong(n,n))? 1: 0;
}

int sumStrong(int n, int a){
    int sum = 0;
    if(n != 0){
        sum = pow(n%10, digitCount(a)) + sumStrong(n/10, a);
    }
    return sum;
}

int isPalindrome(int n){
    if(n == reverseNum(n))
        return 1;
    return 0;
}

int reverseNum(int n)
{
    /* Find number of digits in num */
    int digit = (int)log10(n);

    if(n == 0)
        return 0;

    return ((n % 10 * pow(10, digit)) + reverseNum(n / 10));
}

