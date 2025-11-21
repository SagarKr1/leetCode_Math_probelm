// Problem Statement
// square root
// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
// You must not use any built-in exponent function or operator.

// For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
// Example 1:

// Input: x = 4
// Output: 2
// Explanation: The square root of 4 is 2, so we return 2.
// Example 2:

// Input: x = 8
// Output: 2
// Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.

#include <stdio.h>

int root(int x){
    int prev=0,next=0;
    for(int i=1;i<=x;i++){
        next=i*i;
        if(next==x){
            prev=i;
            break;
        }
        if(next>x){
            break;
        }
        prev=i;
    }
    printf("Square root of %d is %d",x,prev);
    return prev;
}

int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    root(n);
    return 0;
}