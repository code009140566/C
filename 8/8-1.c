/* �{���d��: Ch13_my_text.c */
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
int main() {
    FILE  *fpin,  *fpout;    
    char  finname[20]  = "hw12_input.dat";
    char  foutname[20] = "hw12_text.dat";
    student temp;

    fpin  = fopen(finname,  "r");     /* �}�Ҥ�r�ɮ�(Ū) */
    fpout = fopen(foutname, "w");     /* �}�Ҥ�r�ɮ�(�g) */

    if (fpin != NULL) {
    	while (fscanf(fpin, "%s %s %d %d %d", temp.stdID, temp.name, &temp.TWgrade, &temp.Mathgrade, &temp.ENGgrage) != EOF) {    
    	    printf("%s\t%s\t%d\t%d\t%d\n", temp.stdID, temp.name, temp.TWgrade, temp.Mathgrade, temp.ENGgrage);      /*����Ū�ɬO�_���\ */
			 
    	    /* �g�J�O����� */
       		fprintf(fpout, "%s %s %d %d %d\n", temp.stdID, temp.name, temp.TWgrade, temp.Mathgrade, temp.ENGgrage);
    	}
    	printf("%s ���ɧ���\n\n", foutname);

    	fclose(fpin);                     /* �����ɮ� */ 
    	fclose(fpout);                    /* �����ɮ� */

    	fpin = fopen(foutname, "r");     /* �}�Ҥ�r�ɮ�(Ū) */

    	while (fscanf(fpin, "%s %s %d %d %d", temp.stdID, temp.name, &temp.TWgrade, &temp.Mathgrade, &temp.ENGgrage) != EOF) {    
    	    printf("%s\t%s\t%d\t%d\t%d\n", temp.stdID, temp.name, temp.TWgrade, temp.Mathgrade, temp.ENGgrage);      /*����Ū�ɬO�_���\ */
		}
    	printf("%s Ū�ɴ��է���\n\n", foutname);

    	fclose(fpin);                     /* �����ɮ� */ 
    } else {
    	printf("%s �}�ɥ���\n", finname);
	}
     
    system("PAUSE");
    return 0;
}
