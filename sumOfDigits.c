// Problem Statement
// Sum of digit
// Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
// Example 1:
// Input: num = 38
// Output: 2
// Explanation: The process is
// 38 --> 3 + 8 --> 11
// 11 --> 1 + 1 --> 2 
// Since 2 has only one digit, return it.
// Example 2:

// Input: num = 0
// Output: 0

// Constraints:

// 0 <= num <= 231 - 1

#include <stdio.h>

int sumOfDigit(int num){
    int sum;
    while(1){
        sum=0;
        while(num>0){
            int r = num%10;
            sum=sum+r;
            num=num/10;
        }
        if(sum<10){
            break;
        }
        num=sum;
    }
    printf("Sum of digit = %d",sum);
    return 0;
}
int main(){
    int num ;
    printf("Enter a number: ");
    scanf("%d",&num);
    sumOfDigit(num);
    return 0;
}