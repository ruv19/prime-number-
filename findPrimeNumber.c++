#include <stdlib.h>
#include <stdio.h>

int main (void) {

	int num,i,j,k;
	printf("\n bir sayi giriniz:");
	scanf("%d",&num);
	for(i=2; i<num; i++) {
		if(num%i == 0) {
			break;
		}
	}
	
	j=num;
	for(k=2; k<j ;k++) {
		if(j%k == 0) {
			k = 2;
			j--;
		}
	}
	if(j == num) {

		printf("\n sayi asaldir.");
	} else {
		printf("\n sayi asal degildir, sayiya en yakin asal sayi  %d",j);
	}
}
