//23.03.2022 LAB 7. Hafta Soru 1 

/*Klavyeden 0(sıfır) girilinceye kadar tam sayıları hafızayı en verimli şekilde 
kullanarak hafızada tutacak programı C dili ile yazınız.  */

#include <stdio.h>

int main() {
	
	int sayi;
	int sayac=0;
	
	
	printf("Lutfen sayi giriniz.(Sifir girince biter)\n");
	
	do{
		scanf("%d",&sayi);
	} while(sayi != 0);

	
	int *sptr = malloc(sayac*sizeof(int));
	
	printf("Pointer'in adresi: %u\n",*sptr);
	
	
	free(sptr);
	return 0;
}
