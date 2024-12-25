#include<stdio.h>
int main(){
	FILE *fptr;
	fptr = fopen("bt01.txt","r");
	if(fptr == NULL){
		printf("file khong tim thay");
		return;
	}
	char string[100];
	fgets(string,100,fptr);
	printf("Thong tin trong file la: %s", string);
	fclose(fptr);
	
    return 0;
}

