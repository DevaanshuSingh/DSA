#include<stdio.h>

int main(){
    int n1, n2, ans=1, maxNum;
    printf("Please Enter First Number: ");
    scanf("%d",&n1);
    printf("Please Enter Second Number: ");
    scanf("%d",&n2);
    if(n1>n2)
        maxNum=n1;
    else
        maxNum=n2;

    for(int i=maxNum; i>=1; i--){
        if(n1%i==0 && n2%i==0){
            ans=i;
            break;
        }
    }
    printf("Gcd Is: %d", ans);
    return 0;
}
