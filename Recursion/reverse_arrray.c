#include<stdio.h>

int printArr(int n[],int end){
    if(end==0) return 0;
    printArr(n,--end);
    printf("%d ",n[end]);
}

void swap(int* first, int* second){
    int temp = *first;
    *first = *second;
    *second = temp;
}

int reverseArr(int n[],int start, int end){
    if(start>=end){
        printf("\n(%d %d Returning)", start, end);
        return 0;
    }
    swap(&n[start],&n[end-1]);
    reverseArr(n,start+1,end-1);
}

int main(){
    int n[]={1,2},end;
    end=sizeof(n)/sizeof(int);
    printf("Before Reversing Array: ");
    printArr(n,end);

    reverseArr(n,0,end);//Reversing
    
    printf("\nAfter Reversing Array: ");
    printArr(n,end);
    return 0;
}