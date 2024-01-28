#include "NumClass.h"

int powNum(int digit, int counter);
int counter(int num);
int isArmstrong2(int ams, int count, int sum);
int isPalindrome2(int arr[], int mid, int i, int j);

int isArmstrong(int ams){
    int count = counter(ams); //The amount of digits "ams" has.
    int sum = 0;

    return isArmstrong2(ams, count, sum);
}

int isArmstrong2(int ams, int count, int sum){
    int saveAms = ams;

    if(ams == 0){ //We had finished to run over all the digits ams had.
        if(saveAms == sum){
            return 1; //true
        }
        else{
            return 0; //false
        }
    }

    sum = sum + powNum(ams%10,count);
    return isArmstrong2(ams/10, count, sum);  
}

int powNum(int digit, int count){ //A function which calculate the pow of digit.
    int ans=1;

    while(count>0){
        ans = ans*digit;
        count--;
    }

    return ans;
}

int counter(int num) {
    int counter = 0;

    while (num>0){
        num = num/10; 
        counter++; 
    }
    
    return counter;
}

int isPalindrome(int pal){
    int count = counter(pal);
    int arr[count];
    int mid = count/2; //The middle of the arr's indexes.
    int i = 0;
    int j = count;
    

    for(int x=count-1; x>=0; x--){ //Put all of the digits of pal in arr.
        arr[x]=pal%10; //In the units digit.
        pal=pal/10; //Earase that digit from pal.
    }

    return isPalindrome2(arr, mid, i, j); 
}


int isPalindrome2(int arr[], int mid, int i, int j){
    if(i>mid || j<mid){
        return 1; //true.
    }
    else{
        if(arr[i] != arr[j]){
            return 0; //false.
        }

    }

    return isPalindrome2(arr, mid, i++, j--);
}





