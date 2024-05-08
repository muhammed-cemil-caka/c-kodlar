#include <stdio.h>
#include <stdlib.h>
#define PI 3.14            // define önişlemci yerine aşagıda yer alan "float" tanımlayıcısı da kullanılabilir
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int r,h;
    //float PI=3.14;
	printf("'r' degerini giriniz(cm cinsinden):");
	scanf("%d",&r);
	printf("'h' degerini giriniz(cm cinsinden):");
	scanf("%d",&h);
	float hacim=PI*r*r*h/3;
	printf("sonuc:");
	printf("%.3f",hacim);

	return 0;
}