#include "NumClass.h"

int isDivide(int x, int y);
int factorial(int pri);

int isPrime(int pri){

    for(int i=2; i<pri; i++){
        int ans = isDivide(pri,i);
        if(ans==1){
            return 0; //If pri is divisible by i -> pri isn't prime. false.
        }
    }
    return 1; //true.
}

int isDivide(int x, int y){ //Checking whether x is divisible by y.
    while (x>0){
        x=x-y;
    }
    if(x==0){
        return 1; //true
    }
    return 0; //false
}

int isStrong(int stro){
    int saveStro = stro;
    int digit = 0;
    int ans = 0;

    while(stro>0){
        digit = stro%10; //The unity digit of "stro".
        ans = ans + factorial(digit); //Sum of the factorial of all the digits at "stro".
        stro = stro/10; //Earase this digit.
    }

    if(saveStro == ans){
        return 1; //true
    }
    return 0; //false
}

int factorial(int pri){ //A function which help us to calculate the factorial of number.
    int ans=1;

    for(int i=pri; i>1; i--){ 
        ans = ans*pri;
    }

    return ans;
}











