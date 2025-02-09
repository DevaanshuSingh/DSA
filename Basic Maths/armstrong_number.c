// HOLD
#include<stdio.h>
#include<stdbool.h>

bool armStrongNumber(int n){
    int num=n;
    int store=0;
    while(n>0){
        store+=(n%10)*(n%10)*(n%10);
        n=n/10;
    }
    if(num==store)
        return true;
    else
        return false;
}

int main(){
    int n;
    printf("Please Enter A Number To Check IsArmstrongNumber: ");
    scanf("%d",&n);
    printf("%d ",armStrongNumber(n));
    return 0;
}
// HOLD