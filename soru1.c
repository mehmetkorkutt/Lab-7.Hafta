//23.03.2022 LAB 6. Hafta Soru 1 

/*Klavyeden 0(s�f�r) girilinceye kadar tam say�lar� haf�zay� en verimli �ekilde 
kullanarak haf�zada tutacak program� C dili ile yaz�n�z.  */

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
