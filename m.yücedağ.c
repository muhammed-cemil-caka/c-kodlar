#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
/*	
	char kitapadi[30]="tutunamayanlar";
	char yazar[20]="oguz atay";
	printf("********** kitap bilgisi **********\n\n\n");
	printf("isim: %s\n",kitapadi);
	printf("yazar: %s\n\n\n",yazar);
	printf("*********************************");	
	*/
/*	
	char ad[20],soyadi[15],yas[2],sehir[15],meslek[15];
	printf("adiniz:");
	scanf("%s",&ad);
	printf("soyadiniz:");
	scanf("%s",&soyadi);
	printf("yasiniz:");
	scanf("%s",&yas);
	printf("mesleginiz:");
	scanf("%s",&meslek);
	printf("sehriniz:");
	scanf("%s",&sehir);
	
	printf("\n\n\n");
	
	printf("adi:%s \n",ad);
	printf("soyadi:%s\n",soyadi);
	printf("yasi: %s\n",yas);
	printf("meslek: %s\n",meslek);
	printf("sehir: %s",sehir);
	*/

/*	printf("***sinav puanlarini giriniz***\n");
	int s1,s2,s3;
	printf("s1 degerini giriniz:");
	scanf("%d",&s1);
	printf("s2 degerini giriniz:");
	scanf("%d",&s2);
	printf("s3 degerini giriniz:");
	scanf("%d",&s3);
	float ort;
	ort=(s1+s2+s3)/3;
	printf("ort:%.2f \n",ort);
	if(ort>=50){
	printf("dersten gectiniz!");}
	
	else if (ort>=40)
	printf("dersten sorumlu gectiniz!");
	
	else 
	printf("kaldiniz!!!");
*/	
/*
     int i;
     for(i=0;i<=10;i++)
     {
     	printf("%d - merhaba dunya \n",i); 
	 }
*/


/*	    
    int i;
	int sayi;
	int fact;
	fact=1;
	printf("faktoriyeli alinacak sayiyi giriniz:");	
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++){
		fact=fact*i;
	}
	printf("sonuc:%d",fact);	
*/	


/*	int i;
	int j;
	j=0;
	for(i=0;i<10;i++){
		j=j+i;
	}
	printf("sonuc: %d",j);
*/
	          // a b
	 //fibonacci:1 1 2 3 5 8 13 21 34 55 89....
/*	 int a,b,c,i;
	 a=1;
	 b=1;
	 printf("%d",a);
	 printf("%d",b);
	 for(i=0;i<20;i++)
	 {
	 	c=a+b;
	 	a=b;
	 	b=c;
	 	printf("%d ",c);
	 } 	
*/
/*	
	int i;
	for (i=0;i<=153;i++){
		if(i%3==0)
		printf("%d ",i);
	}
*/
 /* 
  char ders;
  printf("ders kodunu giriniz:\n");
  scanf("%s",&ders);
   
  switch (ders)
  {
  	case 't' : printf("turkce");
  	break;
  	case 'm' : printf("matematik");
  	break;
  	case 'f' : printf("fen bilimleri");
  	break;
  	default : printf("hata");
   } 
*/
  /*  int ay;
	printf("ay numarasini giriniz:\n");
	scanf("%d",&ay);
	switch(ay)
	{
		case 1:printf("ocak"); break;
		case 2:printf("subat"); break;
		case 3:printf("mart"); break;
		case 4:printf("nisan"); break;
		case 5:printf("mayıs"); break;
		case 6:printf("haziran"); break;
		case 7:printf("temmuz"); break;
		case 8:printf("ağustos"); break;
		case 9:printf("eylul"); break;
		case 10:printf("ekim"); break;
		case 11:printf("kasim"); break;
		case 12:printf("aralık"); break;
		default:printf("HATA!!!"); 
	  } 
 */
/*
    int cift_sayilar[]={0,2,4,6,8};
    printf("%d",cift_sayilar[2]);
*/ 

 /*   int sayilar[]={12,5,55,63,87,14,3};
    int i;
    for(i=0;i<7;i++){
    	printf("%d\n",sayilar[i]);
	}
*/
    
  /*  int sayi[]={21,33,4,66,5};
    int toplam=0;
    int i;
    for(i=0;i<5;i++){
    	toplam=toplam+sayi[i];
	}
      printf("%d",toplam);
*/
/*
    int dizi[100];
    int i,sayi;
    printf("sayi degerini girin:");
    scanf("%d",&sayi);
    for(i=0;i<sayi;i++)
    {
    	printf("dizinin %d. degerini girin:",i+1);
    	scanf("%d",&dizi[i]);
	}
    printf("\n\n");
    
    int k;
    for(k=0;k<sayi;k++)
    {
    	printf(" %d ",dizi[k]);
	}
*/
   /* int i;
    int j;
    for (i=1;i<=20;i++)
    {
    	for(j=1;j<=i;j++)
    	{
    		printf("*");
		}
		printf("\n");
	}
*/

/*
     int i,j;
     for(i=1;i<=10;i++)
     {
     	for(j=10;j>=i;j--)
     	{
     		printf("*");
		 }
		 printf("\n");
	 }
*/
    
   /* int i,j,k,l;
    for(i=1;i<=5;i++)
    {
    	for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}

    for (k=1;k<=5;k++)
	{
		for(l=5;l>=k;l--)
		{
			printf("*");
		}
		 printf("\n");
	}
  */
 /* 
    int satir,sutun;
    printf("satir sayisini giriniz:");
    scanf("%d",&satir);
    printf("sutun sayisini girin:");
    scanf("%d",&sutun);
    int i,j;
    int matris[satir][sutun];
    for(i=0;i<satir;i++)
    {
    	for(j=0;j<sutun;j++)
   	 {
   	    	printf("[%d][%d]-->",i+1,j+1);
  		    scanf("%d",&matris[i][j]);
     }
    printf("\n");
    }
   
    int k,l;
    for(k=0;k<satir;k++)
    {
   	 for(l=0;l<sutun;l++)
   	 {
   	  printf(" %d ",matris[k][l]);
	 }
	 printf("\n");
    }   
 */
    





























	return 0;
}