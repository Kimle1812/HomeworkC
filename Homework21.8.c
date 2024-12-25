#include<stdio.h>

int main(){
	FILE *fptr;
	fptr = fopen("student.txt","r");
	char readStudent [100] = {0};
	//struct Student st[100];

	if(fptr == NULL){
		printf("Loi mo file!!!\n");
		return 1;
	}
	while(fgets(readStudent,sizeof(readStudent),fptr)!= NULL){
		printf("dong tu file: %s", readStudent);
	}
	fclose(fptr);
	return 0;
}

