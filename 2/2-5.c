#include <stdio.h>
#include <stdlib.h>

int main(){
	int seasons=0;
	
	printf("��J�u�`�Ʀr(�п�J1~4)�G");
	scanf("%d", &seasons);
	
	switch(seasons) {
        case 1: 
            printf("�K��");
            break; 
        case 2: 
            printf("�L��");
            break; 
        case 3: 
            printf("���");
            break; 
        case 4: 
            printf("�V��");
            break;  
        default: 
            printf("��J���~");
    }
    
    system("pause");
    return 0;
} 
