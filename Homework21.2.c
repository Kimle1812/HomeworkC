#include<stdio.h>
int main(){
	FILE *fptr;
	fptr = fopen("bt01.txt","r");
	if(fptr == NULL){
		printf("file khong tim thay");
		return;
	}
	char word = fgetc(fptr);
	printf("Thong tin ki tu dau trong file la: %c", word);
	fclose(fptr);
	
    return 0;
}

