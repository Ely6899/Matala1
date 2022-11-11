#include <stdio.h>
#include "NumClass.h"


int main() {
    int startNum, endNum;
    printf("Enter first number(must be positive): ");
    scanf("%d", &startNum);
    printf("Enter last number(must be positive): ");
    scanf("%d", &endNum);

    printf("Primes: ");
    for(int currNum = startNum; currNum <= endNum; currNum++){
        if(isPrime(currNum) == 1){
            printf("%d ", currNum);
        }
    }
    printf("\nStrongs: ");
    for(int currNum2 = startNum; currNum2 <= endNum; currNum2++){
        if(isStrong(currNum2) == 1){
            printf("%d ", currNum2);
        }
    }

    printf("\nArmstrongs: ");
    for(int currNum3 = startNum; currNum3 <= endNum; currNum3++){
        if(isArmstrong(currNum3) == 1){
            printf("%d ", currNum3);
        }
    }

    printf("\n");
    return 0;
}
