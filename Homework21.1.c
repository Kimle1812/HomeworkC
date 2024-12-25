#include<stdio.h>
int main(){
	FILE *fptr;
	fptr = fopen("bt01.txt","w");
	char string[100];
	printf("Moi nhap chuoi ban muon luu vao file: ");
	fgets(string,sizeof(string),stdin);
	fputs(string, fptr);
	fclose(fptr);
    return 0;
}

