// Problem statement
// Power of Three
// Given an integer n, return true if it is a power of three. Otherwise, return false.

// An integer n is a power of three, if there exists an integer x such that n == 3x.
// Example 1:

// Input: n = 27
// Output: true
// Explanation: 27 = 33
// Example 2:

// Input: n = 0
// Output: false
// Explanation: There is no x where 3x = 0.
// Example 3:

// Input: n = -1
// Output: false
// Explanation: There is no x where 3x = (-1).

#include <stdio.h>
#include <stdbool.h>

bool powerOfThree(int n){
    int power=3;
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
    printf("Power of three is %d",t);
    return t;
}

int main(){
    int num;
    printf("Enter a numer ");
    scanf("%d",&num);
    powerOfTwo(num);
    return 0;
}