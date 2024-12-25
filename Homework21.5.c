#include<stdio.h>
#include<string.h>
int main(){
	FILE *fptr;
	fptr = fopen("bt05.txt","a");
	char string[100];
	int length;
	printf("Moi ban nhap so luong chuoi: ");
	scanf("%d", &length);
	getchar();
	printf("Moi nhap cac chuoi ban muon luu vao file:\n");
	for(int i = 0; i < length; i++){
		printf("Chuoi %d ban muon luu vao file: ", i + 1);
		fgets(string,sizeof(string),stdin);
		fputs(string, fptr);
	}
	fclose(fptr);
	fptr = fopen("bt05.txt","r");
	if(fptr == NULL){
		printf("file khong tim thay");
		return;
	}
	printf("Noi dung tung dong trong file la:\n");
	for(int i = 0; i < length; i++){
		fgets(string, 100, fptr);
		printf("Dong %d trong file la: %s", i + 1, string);
	}
	fclose(fptr);
    return 0;
}

