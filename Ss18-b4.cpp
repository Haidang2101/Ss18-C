#include<stdio.h>
#include<string.h>
struct Dang{
		char name[50];
		int age;
		char phone[15];
	};
int main(){
	struct Dang m[50];
	for(int i = 0;i<50;i++){
		printf("ban co ID la %d\n",i+1);
		printf("moi ban nhap ten: ");
		scanf("%s",m[i].name);
		printf("moi ban nhap tuoi: ");
		scanf("%d",&m[i].age);
		getchar();
		printf("moi ban nhap so dien thoai: ");
		scanf("%s",m[i].phone);
	}
	printf("thong tin cua cac ban là \n ");
	for(int i = 0;i<50;i++){
		printf("ID cua ban la %d",i+1);
		printf("ten cua ban la %s\n",m[i].name);
		printf("tuoi cua ban la %d\n",m[i].age);
		printf("so dien thoai cua ban la %s\n",m[i].phone);
	}
	return 0;
}
