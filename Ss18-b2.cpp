#include<stdio.h>
#include<string.h>
int main(){
	struct Dang{
		char name[50];
		int age;
		char phone[50];
	};
	struct Dang m;
	printf("moi ban nhap ten: ");
	scanf("%s",m.name);
	printf("moi ban nhap tuoi: ");
	scanf("%d",&m.age);
	printf("moi ban nhap so dien thoai: ");
	scanf("%s",m.phone);
	printf("thong tin cua ban:\n ten cua ban la %s\n tuoi la %d\n so dien thoai la %s\n",m.name,m.age,m.phone);
	return 0;
}
