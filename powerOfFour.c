// Problem statement
// Power of four
// Given an integer n, return true if it is a power of four. Otherwise, return false.
// An integer n is a power of four, if there exists an integer x such that n == 4x.
// Example 1:

// Input: n = 16
// Output: true
// Example 2:

// Input: n = 5
// Output: false
// Example 3:

// Input: n = 1
// Output: true

#include <stdio.h>
#include <stdbool.h>

bool powerOfThree(int n){
    int power=4;
    bool t;
    int long mult=1;
    while(1){
        if(n==mult){
            t=true;
            break;
        }
        if(n<mult){
            t=false;
            break;
        }
        mult=mult*power;
    }
    printf("Power of four is %d",t);
    return t;
}

int main(){
    int num;
    printf("Enter a numer ");
    scanf("%d",&num);
    powerOfTwo(num);
    return 0;
}