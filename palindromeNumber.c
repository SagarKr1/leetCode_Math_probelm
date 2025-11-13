// Problem Statement
// 9. Palindrome Number
// Given an integer x, return true if x is a palindrome, and false otherwise.
// Example 1:
// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.
// Example 2:
// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
// Example 3:
// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
#include <stdio.h>
#include <stdbool.h>


int isPalindrome(int x){
    if(x<0){
        return false;
    }
    int rev=0,org=x;
    int long n=0;

    while(org>0){
        int d = org%10;
        n=d+n*10;
        org=org/10;
    }

    if(n!=x){
        return false;
    }
    return true;

}
int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    bool val = isPalindrome(num);
    if(val){
        printf("%d is a palindrome number",num);
    }else{
        printf("%d is not a palindrome number",num);
    }
    return 0;
}