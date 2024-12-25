#include<stdio.h>
int main(){
	FILE *sourceFile, *resultFile;
	char c;
	sourceFile = fopen("bt01.txt", "r");
	if (sourceFile == NULL){
		printf("Loi mo tep tin\n");
		return 1;
	}
	resultFile = fopen("bt06.txt", "w");
	if (resultFile == NULL){
		printf("Loi mo tep tin\n");
		fclose(sourceFile);
		return 1;
	}
	while ((c = fgetc(sourceFile)) != EOF) {
        fputc(c, resultFile);
    }
	printf("Sao chep noi dung sang bt06.txt thanh cong");
	fclose(sourceFile);
	fclose(resultFile);
	return 0;
}

