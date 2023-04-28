#include <stdio.h>
void main(){
	int sw = 0;
	int i, div;
 	for (i = 2; i <= 100; i++){ 
		for (div = 2; div < i; div++){
			if (i % div == 0) { 
				sw = 1;
				break;	
			}
		}
		if (!sw) {		
			printf("%d\n", i);  		
		}
		sw = 0; 		
	}
}



