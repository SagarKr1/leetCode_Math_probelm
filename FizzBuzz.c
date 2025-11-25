// Problem Statement
// Fizz Buzz
// Given an integer n, return a string array answer (1-indexed) where:

// answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
// answer[i] == "Fizz" if i is divisible by 3.
// answer[i] == "Buzz" if i is divisible by 5.
// answer[i] == i (as a string) if none of the above conditions are true.
// Example 1:

// Input: n = 3
// Output: ["1","2","Fizz"]
// Example 2:

// Input: n = 5
// Output: ["1","2","Fizz","4","Buzz"]
// Example 3:

// Input: n = 15
// Output: ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]

#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int FizzBuzz(int n){
    char **arr = (char **)malloc(n * sizeof(char*));

    for (int i = 1; i <= n; i++) {
        arr[i-1] = (char *)malloc(20); // each string max 20 chars

        if (i % 3 == 0 && i % 5 == 0) {
            strcpy(arr[i-1], "FizzBuzz");
        }
        else if (i % 3 == 0) {
            strcpy(arr[i-1], "Fizz");
        }
        else if (i % 5 == 0) {
            strcpy(arr[i-1], "Buzz");
        }
        else {
            sprintf(arr[i-1], "%d", i);
        }
    }

    // Print results
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
        free(arr[i]);  // Free each string
    }
    free(arr); // Free array pointer

    return 0;
}

int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    FizzBuzz(n);
    return 0;
}