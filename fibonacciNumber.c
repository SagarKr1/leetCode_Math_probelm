// Problem Statement
// Fibonacci Number

// The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

// F(0) = 0, F(1) = 1
// F(n) = F(n - 1) + F(n - 2), for n > 1.
// Given n, calculate F(n).
// Example 1:

// Input: n = 2
// Output: 1
// Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.
// Example 2:

// Input: n = 3
// Output: 2
// Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.
// Example 3:

// Input: n = 4
// Output: 3
// Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.

#include <stdio.h>

int fib(int n){
    int f0=0,f1=1;
    if(n==0){
        printf("sum of fibonacci number of %d series is %d",n,f0);
        return 0;
    }
    if(n==1){
        printf("sum of fibonacci number of %d series is %d",n,f1);
        return 0;
    }
    int sum;
    for(int i=2;i<=n;i++){
        sum = f0+f1;
        printf("f0 %d\nf1 %d\nsum %d\n",f0,f1,sum);
        f0=f1;
        f1=sum;
    }
    printf("sum of fibonacci number of %d series is %d",n,sum);
    return sum;
}

int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    fib(n);
    return 0;
}