#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int main(){
	//addition
	int x;
	x = divi(4,0);
	printf("%f",x);
	//oustraction
	
	
}
int somme (int x,int y){
	int z;
     z = x + y;
    return z;
 }
int divi (int x, int y){
	int d;
	if (y != 0){
	
	d = x / y;

	return d;
	}else{
		return 0;
	}
}
int multi (int x, int y){
	int m;
	m = x * y;
	return m;
	
}
int moin (int x, int y){
	int n;
	n = x - y;
	return n;
}

