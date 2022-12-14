//
// Created by ely6899 on 11/9/22.
//
extern int digitCount(int n);
#include <math.h>
#define TRUE 1
#define FALSE 0
/*
 * Checks whenever candidate param is considered an armstrong number.
 * */
int isArmstrong(int n){
    int sum = 0;
    int dig = 0;
    int digCount = digitCount(n);
    int n2 = n;
    while(n2 > 0)
    {
        dig = n2 % 10;
        sum += pow(dig, digCount);
        n2 /= 10;
    }
    if(sum == n) return TRUE;
    else return FALSE;
}

int isPalindrome(int n){
    if(n < 0) return FALSE;
    if(n < 10) return TRUE;
    int Fdigit = 0;
    int Ldigit = 0;
    int i = 1;
    for(i = 1; i <= digitCount(n)/2; i++)
    {
        Ldigit = (n % (int)(pow(10,i)) / (int)(pow(10, i-1)));
        Fdigit = (n / (int)(pow(10, digitCount(n) -i)) % 10);
        if(Ldigit != Fdigit) return 0;
    }
    return TRUE;
}

