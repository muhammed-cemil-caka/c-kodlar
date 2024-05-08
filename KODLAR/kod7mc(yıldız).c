#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
   
   int n;
   int i;
   int j;
   scanf("%d",&n);
   for(i=n;i>0;i--){ 
     
	 
	  for(j=0;i>j;j++){
      	
      	printf("*");
      	
	  }
   printf("\n");
   
   }

	return 0;
}