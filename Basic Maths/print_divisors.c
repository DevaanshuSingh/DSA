#include<stdio.h>
#include<stdbool.h>

int printDivisors(int n){
       for(int i=1; i<=n; i++){
           if((n%i)==0){
                printf("%d ", i);
            }
       }
       return 0;
}

int main(){
    int n;
    printf("Please Enter A Number For Get All The Divisors: ");
    scanf("%d",&n);
    printDivisors(n);
}