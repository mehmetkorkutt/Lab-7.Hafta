#include <stdio.h>

int main() {
	
	int numara[10];
	
	int ciftsayi=0;
	
	int teksayi=0;
	
	int a=0;
	
	printf("Ogrenci numarasi girin\n");
	
	for(a; a < 10 ; a++){
		
		scanf("%d",&numara[a]);
		
		if (numara[a]%2==0) {		
			ciftsayi++;
		}
		
		else {
			teksayi++;
		}
	}
	
	printf("Cift sayi sayisi: %d\n",ciftsayi);
	
	printf("Tek sayi sayisi: %d\n",teksayi);
	
	int *tp=malloc(teksayi*(sizeof(int)));
	
	char *cp=malloc(ciftsayi*sizeof(char));
	
	printf("%u\n",tp);
	
	printf("%u\n",cp);
	
	free(tp);
	
	free(cp);
	
	return 0;	
}
