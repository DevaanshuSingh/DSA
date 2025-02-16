#include<stdio.h>

int i=0;

void print(int n){
    if(i==n) return;
    printf("DSA\n",i);
    i++;
    print(n);
}

int main(){

    int n;
    printf("Enter Iteration Times How  Time You Want To Print: 'DSA': ");
    scanf("%d", &n);
    print(n);
    return 0;
}