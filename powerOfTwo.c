// Problem statement
// Power of Two
// Given an integer n, return true if it is a power of two. Otherwise, return false.

// An integer n is a power of two, if there exists an integer x such that n == 2x.
// Example 1:

// Input: n = 1
// Output: true
// Explanation: 20 = 1
// Example 2:

// Input: n = 16
// Output: true
// Explanation: 24 = 16
// Example 3:

// Input: n = 3
// Output: false
#include <stdio.h>
#include <stdbool.h>

bool powerOfTwo(int n){
    int power=2;
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
    printf("Power of two is %d",t);
    return t;
}

int main(){
    int num;
    printf("Enter a numer ");
    scanf("%d",&num);
    powerOfTwo(num);
    return 0;
}