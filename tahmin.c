#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    	
    int x;
    int tahmin;
    int y=1;
        srand(time(NULL));
        x = rand() % 1000 + 1; 
        printf("1-1000 arasinda bir sayi tahmin etmeye calisin.\n");
    for(y;;y++) {
        printf("Tahmininiz: ");
        scanf("%d", &tahmin);  
    if (tahmin>1000){
        	printf("HATA!!\nsayi 1 ile 1000 arasinda olmak zorunda.\n");
		}
    else if (tahmin == x) {
            printf("Tebrikler, tahmininiz dogru! %d. denemede bildiniz.\n", y);
    return 0;} 
	else if (tahmin < x) {
            printf("Daha yuksek bir sayi tahmin etmelisiniz.\n");
    }else {
            printf("Daha dusuk bir sayi tahmin etmelisiniz.\n");
        }
   }
return 0; }
   