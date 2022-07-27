#include <iostream>
#include <stdio.h>

int main(){
	
	int a = 1025;
	int *p = &a;
	int **q = &p;
	int ***y = &q;
	printf("p: %d\n", *p);
	printf("q: %d\n", **q);
	printf("y: %d\n", ***y);
	
	
	return 0;
}