#include <stdio.h>
#include "NumClass.h"


int main() {
    int startNum, endNum;
    printf("Enter first number(must be positive): ");
    scanf("%d", &startNum);
    printf("Enter last number(must be positive): ");
    scanf("%d", &endNum);
    int currNum;

    printf("Primes: ");
    for(currNum = startNum; currNum <= endNum; currNum++){
        if(isPrime(currNum) == 1){
            printf("%d, ", currNum);
        }
    }

    printf("\nStrongs: ");
    for(currNum = startNum; currNum <= endNum; currNum++){
        if(isStrong(currNum) == 1){
            printf("%d, ", currNum);
        }
    }

    printf("\nArmstrongs: ");
    for(currNum = startNum; currNum <= endNum; currNum++){
        if(isArmstrong(currNum) == 1){
            printf("%d, ", currNum);
        }
    }



    printf("\nPalindromes: ");
    for(currNum = startNum; currNum <= endNum; currNum++){
        if(isPalindrome(currNum) == 1){
            printf("%d, ", currNum);
        }
    }

    printf("\n");
    return 0;
}
