#include<stdio.h>
#include<stdbool.h>

bool palindrome(int n){
    int num=0;
    int store=n;
    while(n>0){
        int id = n%10;
        num=(num*10)+id;
        n=n/10;
    }
    if(num==store)
        return true;
    else
        return false;
}

int main(){
    int n;
    printf("Please Enter A Number To Check IsPalindrome: ");
    scanf("%d",&n);
    printf("%d ",palindrome(n));
    return 0;
}
