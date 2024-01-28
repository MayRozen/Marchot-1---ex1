#include "NumClass.h"

int powNum(int digit, int counter);
int counter(int num);

int isArmstrong(int ams){
    int count = counter(ams); //The amount of digits "ams" has.
    int digit = 0;
    int saveAms = ams;
    int sum = 0;

    while(ams>0){
        digit = ams%10; //The unity digit of "ams".
        sum = sum + powNum(digit,count);
        ams = ams/10; //Earase this digit.        
    }

    if(saveAms == sum){
        return 1; //true
    }
    return 0; //false
}

int powNum(int digit, int counter){ //A function which calculate the pow of digit.
    int ans=1;

    while(counter>0){
        ans = ans*digit;
        counter--;
    }

    return ans;
}

int isPalindrome(int pal){
    int count = counter(pal);
    int arr[count];
    int mid = count/2; //The middle of the arr's indexes.

    for(int j=count-1; j>=0; j--){ //Put all of the digits of pal in arr.
        arr[j]=pal%10; //Put in the unity digit in the array.
        pal=pal/10; //Earase that digit from pal.
    }

    for(int i=0; i<mid; i++){
        if (arr[i] != arr[count-i-1]){ //If the first  and last values in the array are not equal -> false.
          return 0; //false
        }
    }
    return 1; //If we run all over the array and everything was fine -> true.
}

int counter(int num) { //Sum the amount of digits num has.
    int count = 0;

    while (num>0){
        num = num/10; 
        count++; 
    }
    
    return count;
}






