/* 程式範例: Ch13_my_text.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct record { /* 記錄結構宣告 */
	char stdID[20];
    char name[20];
    int TWgrade;
    int Mathgrade;
    int ENGgrage;
};
typedef struct record student;

/* 主程式 */ 
int main() {
    FILE  *fpin,  *fpout;    
    char  finname[20]  = "hw12_input.dat";
    char  foutname[20] = "hw12_text.dat";
    student temp;

    fpin  = fopen(finname,  "r");     /* 開啟文字檔案(讀) */
    fpout = fopen(foutname, "w");     /* 開啟文字檔案(寫) */

    if (fpin != NULL) {
    	while (fscanf(fpin, "%s %s %d %d %d", temp.stdID, temp.name, &temp.TWgrade, &temp.Mathgrade, &temp.ENGgrage) != EOF) {    
    	    printf("%s\t%s\t%d\t%d\t%d\n", temp.stdID, temp.name, temp.TWgrade, temp.Mathgrade, temp.ENGgrage);      /*測試讀檔是否成功 */
			 
    	    /* 寫入記錄資料 */
       		fprintf(fpout, "%s %s %d %d %d\n", temp.stdID, temp.name, temp.TWgrade, temp.Mathgrade, temp.ENGgrage);
    	}
    	printf("%s 建檔完成\n\n", foutname);

    	fclose(fpin);                     /* 關閉檔案 */ 
    	fclose(fpout);                    /* 關閉檔案 */

    	fpin = fopen(foutname, "r");     /* 開啟文字檔案(讀) */

    	while (fscanf(fpin, "%s %s %d %d %d", temp.stdID, temp.name, &temp.TWgrade, &temp.Mathgrade, &temp.ENGgrage) != EOF) {    
    	    printf("%s\t%s\t%d\t%d\t%d\n", temp.stdID, temp.name, temp.TWgrade, temp.Mathgrade, temp.ENGgrage);      /*測試讀檔是否成功 */
		}
    	printf("%s 讀檔測試完成\n\n", foutname);

    	fclose(fpin);                     /* 關閉檔案 */ 
    } else {
    	printf("%s 開檔失敗\n", finname);
	}
     
    system("PAUSE");
    return 0;
}
