//
// Created by ely6899 on 11/13/22.
//

#import <math.h>
extern int digitCount(int n);
int reverseNum(int n);
int isArmstrong2(int n, int m);

#define True 1
#define False 0

int isArmstrong(int n){
    return isArmstrong2(n,n);
}

int isArmstrong2(int n, int n2){
    static int sum = 0;
    int ans = 0;
    if(sum == n2) ans = 1;
    if(n != 0){
        sum += pow(n%10, digitCount(n));
        isArmstrong2(n/10, n2);
    }
    return ans;
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



