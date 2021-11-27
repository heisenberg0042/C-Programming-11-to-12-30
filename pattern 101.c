#include<stdio.h>

main(){
	
	int i,j,k;
	
	
	for(i=0;i<11;i++){
		
		for(j=0;j<11;j++){
			
			k=i+j;
			
			if( k==10 || i==j ){
				
				printf("*");
			}
			else{
				printf(" ");
			}
	
		}
		printf("\n");
	}
}
