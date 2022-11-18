//
// Created by ely6899 on 11/13/22.
//

#include <math.h>
#include <stdio.h>

extern int digitCount(int n);
int reverseNum(int n);
int sumStrong(int n, int a);

#define True 1
#define False 0

int isArmstrong(int n){
    return (n == sumStrong(n,n))? 1: 0;
}

int sumStrong(int n, int a){
    static int sum = 0;
    if(n != 0){
        sum = (int)(pow(n%10, digitCount(a))) + sumStrong(n/10, a);
    }
    return sum;
}

int isPalindrome(int n){
    int reverseN = reverseNum(n);
    if(n == reverseN) return 1;
    return 0;
}

int reverseNum(int n){
    int leftovers;
    static int sum = 0; //we want to define sum as static so it will maintain its value during the recursive calls.
    if(n != 0){
        leftovers = n%10;
        sum = sum*10+leftovers;
        reverseNum(n/10);
    }
    else return sum;
    return sum;
}



