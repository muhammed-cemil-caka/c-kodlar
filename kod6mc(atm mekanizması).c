 #include <stdio.h>
 #include <stdlib.h>

 /* run this program using the console pauser or add your own getch, system("pause") or input loop */

 int main(int argc, char *argv[]) {
	
	int islem;
	int bakiye=1000;
	int tutar;
	int iban;
	int sifre;
	       sifre=171735;
	       printf("sifrenizi girin:");
	       scanf("%d",&sifre);
	if(sifre==171735){
	       printf("sifre dogru.\n");
	       printf("bakiyeniz 1000 TL`dir.\n");
	}
	else{
		   printf("hatali sifre tekrar deneyiniz!!"); 
	return 1;}
	       printf("islem seciniz:");
	       printf("\n1:para yatirma\n2:para cekme\n3:havale yapma\n4:kart iade\n");
	       scanf("%d",&islem);
	
	
    switch(islem){
    	
    	case 1:
    	   printf("yatirilacak tutari giriniz:");
    	   scanf("%d",&tutar);
    	   bakiye=1000+tutar;
    	   printf("isleminiz gerceklestirildi.\n");
           printf("yeni bakiyeniz:");
    	   printf("%d",bakiye);
    break;
    
        case 2:
           printf("cekilecek tutari giriniz:");
           scanf("%d",&tutar);
        if(tutar>bakiye){
           printf("isleminiz gerceklestirilemedi!!! \n");
    	   printf("yetersiz bakiye!!!");
        return 2;}
    	   bakiye=1000-tutar;
    	   printf("yeni bakiyeniz:");
    	   printf("%d",bakiye);
    break;	
        
        case 3:
		   printf("havale yapilacak tutari giriniz:");
    	   scanf("%d",&tutar);
    	   
    	   printf("havale yapilacak kisinin iban numarasini giriniz!\n");
    	   printf("iban:");
           scanf("%d",&iban);
    	if(tutar>bakiye){		
    	   printf("isleminiz gerceklestirilemedi!!!\n");
    	   printf("yetersiz bakiye!!!");
        return 3;}
    	   bakiye=1000-tutar;
    	   printf("isleminiz gerceklestirildi.\n");
    	   printf("yeni bakiyeniz:");
    	   printf("%d",bakiye);
    break;

    	case 4:
    	   printf("kart iade edildi.");
    break;
	
	default:
	       printf("bilinmeyen islem!!!");
	break;	
        }

	return 0;
        }