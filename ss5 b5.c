#include <stdio.h>
int main(){
	int n,i; 
	for (int n=1;n<=9;n++){
		printf("bang cua chuong %d\n",n);
		for(int i=1;i<=10;i++){
			printf("%d * %d=%d\n", n, i, n*i);
		}
		printf("\n");
	}
	}

