/* �{���d��: Ch13_my_binary.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct record { /* �O�����c�ŧi */
	char stdID[20];
    char name[20];
    int TWgrade;
    int Mathgrade;
    int ENGgrage;
};
typedef struct record student;

/* �D�{�� */ 
int main(void){
    FILE  *fpin,  *fpout;    
    char  finname[20]  = "hw12_input.dat";
    char  foutname[20] = "hw12_binary.dat";
    student temp;

    fpin  = fopen(finname, "r");     /* �}�Ҥ�r�ɮ�(Ū) */
    fpout = fopen(foutname, "wb");   /* �}�ҤG�i���ɮ�(�g) */

    if (fpin != NULL) {
    	while(fscanf(fpin, "%s %s %d %d %d", temp.stdID, temp.name, &temp.TWgrade, &temp.Mathgrade, &temp.ENGgrage) != EOF){    
    	    printf("%s\t%s\t%d\t%d\t%d\n", temp.stdID, temp.name, temp.TWgrade, temp.Mathgrade, temp.ENGgrage);        /*����Ū�ɬO�_���\ */ 
    	    
       		/* �g�J�O����� */ 
            fwrite(&temp, sizeof(temp), 1, fpout);  /* �g�J�ɮ� */       		
    	}
    	printf("%s ���ɧ���\n\n", foutname);

    	fclose(fpin);                     /* �����ɮ� */ 
    	fclose(fpout);                    /* �����ɮ� */

    	fpin = fopen(foutname, "rb");     /* �}�ҤG�i���ɮ�(Ū) */

    	while (fread(&temp, sizeof(temp), 1, fpin) == 1){    /* fread�|�^�ǩ�Ū������ת��ƶq �Ǧ��P�_�ɮ׬O�_���� */ 
       		printf("%s\t%s\t%d\t%d\t%d\n", temp.stdID, temp.name, temp.TWgrade, temp.Mathgrade, temp.ENGgrage); 
    	}
    	printf("%s Ū�ɴ��է���\n\n", foutname);

    	fclose(fpin);                     /* �����ɮ� */ 
    }else{
    	printf("%s �}�ɥ���\n", finname);
	}
        
    //system("PAUSE");
    return 0;
}

