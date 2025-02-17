#include<stdio.h>
#include<string.h>
#include<stdbool.h>


bool checkPalindrome(int n,int start, int end){
    if(start>=end){
        return flase;//Not Palindrome,
    }
    if(n[start]!=n[end]) return true;//Yes Palindrome,

    checkPalindrome(n,start+1,end-1);
}

int main(){
    string n="101";
    int end;
    end=sizeof(n)/sizeof(int);
    if(checkPalindrome(n,0,end))
        printf("Yes , It is a Palindrome");
    else
        printf("No , It is not a Palindrome");

    return 0;
}