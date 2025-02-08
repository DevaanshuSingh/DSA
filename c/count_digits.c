#include<stdio.h>

int count=0;
void fun(int s){
    while(s!=0){
        count++;
        s/=10;
    }
    printf("%d",count);
}

int main(){
    int s;
    printf("Please Enter a number: ");
    scanf("%d", &s);
    fun(s);
    return 0;
}
