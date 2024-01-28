#include <stdio.h>
#include "NumClass.h"

#include "basicClassification.c"
#include "advancedClassificationLoop.c"

int main(){
    int num1=0;
    int num2=0;

    // printf("Please enter two positive integers:");
    scanf("%d %d", &num1, &num2);

    if(num2>num1){

        printf("The Armstrong numbers are:");
        for(int i=num1; i<=num2; i++){ //Run over all the numbers between num1-num2.
            if(isArmstrong(i)==1){
            printf(" %d", i);
            }
        }
        printf("\n");

        printf("The Palindromes are:");
        for(int i=num1; i<=num2; i++){ 
            if(isPalindrome(i)==1){
            printf(" %d", i);
            }
        }
        printf("\n");

        printf("The Prime numbers are:");
        for(int i=num1; i<=num2; i++){ 
            if(isPrime(i)==1){
            printf(" %d", i);
            }
        }
        printf("\n");

        printf("The Strong numbers are:");
        for(int i=num1; i<=num2; i++){ 
            if(isStrong(i)==1){
            printf(" %d", i);
            }
        }
        printf("\n");
    }
    else{
        printf("The Armstrong numbers are:");
        for(int i=num2; i<=num1; i++){ //Run over all the numbers between num1-num2.
            if(isArmstrong(i)==1){
            printf(" %d", i);
            }
        }
        printf("\n");

        printf("The Palindromes are:");
        for(int i=num2; i<=num1; i++){ 
            if(isPalindrome(i)==1){
            printf(" %d", i);
            }
        }
        printf("\n");

        printf("The Prime numbers are:");
        for(int i=num2; i<=num1; i++){ 
            if(isPrime(i)==1){
            printf(" %d", i);
            }
        }
        printf("\n");

        printf("The Strong numbers are:");
        for(int i=num2; i<=num1; i++){ 
            if(isStrong(i)==1){
            printf(" %d", i);
            }
        }
        printf("\n");
    }
}