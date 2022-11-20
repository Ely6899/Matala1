#include <stdio.h>
#include "NumClass.h"


int main() {
    int startNum, endNum;
    printf("enter first number(must be positive): ");
    scanf("%d", &startNum);
    printf("enter a second number(must be positive and bigger than the first number): ");
    scanf("%d", &endNum);
    int currNum;

    printf("The Armstrong numbers are:");
    for(currNum = startNum; currNum <= endNum; currNum++){
        if(isArmstrong(currNum) == 1){
            printf(" %d", currNum);
        }
    }

    printf("\nThe Palindromes are:");
    for(currNum = startNum; currNum <= endNum; currNum++){
        if(isPalindrome(currNum) == 1){
            printf(" %d", currNum);
        }
    }

    printf("\nThe Prime numbers are:");
    for(currNum = startNum; currNum <= endNum; currNum++){
        if(isPrime(currNum) == 1){
            printf(" %d", currNum);
        }
    }

    printf("\nThe Strong numbers are:");
    for(currNum = startNum; currNum <= endNum; currNum++){
        if(isStrong(currNum) == 1){
            printf(" %d", currNum);
        }
    }

    printf("\n");
    return 0;
}
