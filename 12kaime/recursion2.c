// recursion2.c
#include <stdio.h>

int factorial(int n){
    if(n<2){
        return 1;
    }
    return n*factorial(n-1);
}

int main(void){
	printf("%d\n", factorial(5));
	return 0;
}
