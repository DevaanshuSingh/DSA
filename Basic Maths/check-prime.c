#include<stdio.h>

int main() {
	int n, count;
    scanf("%d",&n);

	if(n<=1){
		printf("False");
		return 0;
	}
	for(int i=1; i<=n; i++){
		if(n%i==0) count++;
	}
	
	if(count>2) printf("False");
	
	else printf("True");
	
	return 0;
}
