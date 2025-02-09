#include<stdio.h>

int main(){
    int s,num=0;
    printf("Enter a number: ");
    scanf("%d", &s);
    while(s>0){
        int id = s%10;
        num=(num*10)+id;
        s=s/10;
    }
    printf("Reversed Number: %d",num);
    return 0;
}
