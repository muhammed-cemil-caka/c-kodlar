#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) { 

int vize, final;
float ort;


  printf("vize notunu giriniz:\n");
  scanf ("%d",&vize);
  
  printf("final notunu giriniz:\n");
  scanf("%d",&final);  
  
  ort=vize*0.4+final*0.6;
  printf("%.1f", ort);   
  
  if (ort>=85&&ort<=100)
       printf("notunuz:%.1f AA ", ort); 
  
  else if(ort<=85&&ort>=75)
       printf("notunuz: %.1f AB ", ort);

  else if(ort<=75&&ort>=65)
       printf("notunuz: %.1f BB",ort);  

  else if(ort<=65&&ort>=55)
       printf("notunu: %.1f BC",ort);
  
  else if(ort<=55&&ort>=50)
       printf("sorumlu gecti: %.1f CC",ort);
  
  else 
       printf("kaldiniz %.1f FF",ort); 
  
	return 0; 
}