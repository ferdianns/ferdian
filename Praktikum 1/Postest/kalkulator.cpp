#include <stdio.h>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	int a, b, hasil, menu ;

	do{
		
	
	
	printf("\nProgram kalkulator sederhana\n");
	printf("============================");
	printf("\n Menu pilihan :");
	printf("\n 1.Penjumlahan ");
	printf("\n 2.Pengurangan ");
	printf("\n 3.Perkalian ");
	printf("\n 4.pembagian ");
	printf("\n 0.exit\n");
	printf("Pilihan menu :");
	scanf("%d", &menu);
	printf("===========================");
	switch (menu){
		
		case 1 :
		printf("\n 1.Penjumlahan: ");
		printf("\n Masukan bilangan pertama :");
		scanf("%d",&a);
		printf("\n Masukan bilangan kedua :");
		scanf("%d",&b);
		hasil=(a+b);
		printf("\n-----------------------------");
		printf("hasil :   %d",hasil);

		break;
		case 2 :
		printf("\n 1.Pengurangan : ");
		printf("\n Masukan bilangan pertama :");
		scanf("%d",&a);
		printf("\n Masukan bilangan kedua :");
		scanf("%d",&b);
		hasil=(a-b);
		printf("\n-----------------------------");
		printf("hasil :   %d",hasil);
		break;
		
		case 3 :
		printf("\n 1.Perkalian : ");
		printf("\n Masukan bilangan pertama :");
		scanf("%d",&a);
		printf("\n Masukan bilangan kedua :");
		scanf("%d",&b);
		hasil=(a*b);
		printf("\n-----------------------------");
		printf("hasil :   %d",hasil);
		break;
		
		case 4:
		printf("\n 1.Pembagian :");
		printf("\n Masukan bilangan pertama :");
		scanf("%d",&a);
		printf("\n Masukan bilangan kedua :");
		scanf("%d",&b);
		hasil=(a/b);
		printf("\n-----------------------------");
		printf("hasil :   %d",hasil);
	}
    return 0;
}
while (menu!=0);

return 0;
}