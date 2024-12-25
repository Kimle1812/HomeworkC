#include<stdio.h>
struct Student{
	char name[50];
	char age[10];
	char phoneNumber[10];
};
int main(){
	FILE *fptr;
	fptr = fopen("student.txt","w");
	struct Student st[50];
	int length;
	printf("Moi ban nhap so luong sinh vien: ");
	scanf("%d", &length);
	getchar();
	for(int i = 0; i < length; i++){
		printf("ID: %d\n", i + 1);
		printf("Moi ban nhap ten: ");
		fgets(st[i].name, sizeof(st[i].name), stdin);
		fputs(st[i].name, fptr);
		st[i].name[length - 1] = '\0';
		printf("Moi ban nhap tuoi: ");
		fgets(st[i].age, sizeof(st[i].age), stdin);
		fputs(st[i].age, fptr);
		printf("Moi ban nhap so dien thoai: ");
		fgets(st[i].phoneNumber, sizeof(st[i].phoneNumber), stdin);
		fputs(st[i].phoneNumber, fptr);
	}
	fclose(fptr);
	printf("Ghi du lieu vao file thanh cong!!!\n");
	return 0;
}

