#include <stdio.h>
#include <stdlib.h>

int main() {
	
    int i=0; 
    int j=1; 
    

    for(i=1;i<=9;i++){ 
    
	    while(j<10){
    		printf("%d x %d = %d\n",i ,j ,i*j);
    		j++;	
		}
		
		if(j=9){
			j=1;
		}
    }
    system("pause");
	return 0;
}
