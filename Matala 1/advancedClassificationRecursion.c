//
// Created by ely6899 on 11/13/22.
//

#include <math.h>

#define True 1
#define False 0

int isArmstrong(int n){
    return 0;
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
