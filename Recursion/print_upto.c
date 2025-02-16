//Print+Sum+Factorial
#include<stdio.h>

int sum=1;

int print(int n){
    if(n==0) return sum;
    sum*=n;
    print(--n);
}

int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    int ans =  print(n);
    printf("Sum: %d",ans);
    return 0;
}