#include <stdio.h>
#include <stdlib.h>

int main(){
	int seasons=0;
	while(1){

		printf("��J�u�`�Ʀr(�п�J1~4)�G");
		scanf("%d", &seasons);
		
		switch(seasons) {
	        case 1: 
	            printf("�K��\n");
	            break; 
	        case 2: 
	            printf("�L��\n");
	            break; 
	        case 3: 
	            printf("���\n");
	            break; 
	        case 4: 
	            printf("�V��\n");
	            break;  
	        default: 
	            printf("��J���~\n");
	    }
    }
    system("pause");
    return 0;
} 
