#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 int ev_catisi(void){
 	printf("      *         *     \n");            
 	printf("     * *       * *    \n");
 	printf("    *   *     *   *   \n");
 	printf("   *     *   *     *  \n");
 	printf("  *       * *       * \n"); 
 	printf(" *---------*---------*\n");
 }
int ev_kati(void){
	
	printf(" |         |         |\n");
	printf(" |         |         |\n");
	printf(" |         |         |\n");
	printf(" |         |         |\n");
	printf(" ---------------------\n");
	
}

int main(int argc, char *argv[]) {
	
	ev_catisi();
	ev_kati();
	ev_kati();
	ev_kati();
	ev_kati();
	return 0;
}