#include <iostream>
#include <stdio.h>

int main(){
	
	int a = 1025;
	int *p = &a;
	printf("siezof integer: %d\n", sizeof(a));
	printf("Adress: %d\nValue: %d\n", &a, a);
	printf("Adress: %d\nValue: %d\n", p+1, *(p+1));
	
	char *p0;
	p0 = (char*)p;
	
	printf("siezof char: %d\n", sizeof(char));
	printf("char Adress: %d\nValue: %d\n", p0, *p0);
	printf("char +1 Adress: %d\nValue: %d\n", p0+1, *(p0+1));
	
	
	
	void *p1;
	p1 = p0;
	printf("Nullptr adress %d", p1);
	
	return 0;
}