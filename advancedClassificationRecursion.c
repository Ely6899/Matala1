//
// Created by ely6899 on 11/13/22.
//

#include <math.h>
#define TRUE 1
#define FALSE 0

extern int digitCount(int n);
int numberReversal(int n);
int sumStrong(int n, int a);


int isArmstrong(int n){
    return (n == sumStrong(n,n))? TRUE: FALSE;
}

int sumStrong(int n, int a){
    int sum = 0;
    if(n != 0){
        sum = pow(n%10, digitCount(a)) + sumStrong(n/10, a);
    }
    return sum;
}

int isPalindrome(int n){
    if(n == numberReversal(n))
        return TRUE;
    return FALSE;
}

//Recursive helper function for isPalindrome.
int numberReversal(int n)
{
    if(n == 0)
        return FALSE;
    //Log helps decide the optimal digit point for the calculation.
    int digit = (int)log10(n);
    return ((n % 10 * pow(10, digit)) + numberReversal(n / 10));
}

