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
    int sum = 0;
    if(n != 0){
        sum = pow(n%10, digitCount(a)) + sumStrong(n/10, a);
    }
    return sum;
}

int isPalindrome(int n){
    if(n / 10 == 0){
        return True;
    }
    else{
        int Ldigit = (n / (int)(pow(10, (int)log10(n)))) % 10;
        int Rdigit = n % 10;
        if(Ldigit != Rdigit){
            return False;
        }
        else{
            n = n / 10;
            n = (n % (int)(pow(10, (int)log10(n))));
            return isPalindrome(n);
        }
    }
}
