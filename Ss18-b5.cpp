#include<stdio.h>
#include<string.h>
struct Dang{
		char name[50];
		int age;
		char phone[15];
	};
int main(){
	int id;
	struct Dang m[50]={
		{ "nguyen Hai Dang",21 , "123456"},
		{ "Nguyen Trung kien", 19, "234567"}, 
		{ "Pham Thanh Tung", 18, "345678"}, 
		{ "Nguyen Tu Anh", 21, "456789"}, 
		{ "Nguyen Le thuy tien", 21, "012345"}
	};
	for (int i=0; i<5; i++){
		printf ("sinh vien thu %d\n",i+1);
		printf ("id :%d\n",i+1); 
		printf ("ten :%s\n",m[i].name);
		printf ("tuoi:%d\n",m[i].age);
		printf ("sdt:%s\n",m[i].phone);
	} 
	printf("moi ban nhap id ban muon sua: ");
	scanf ("%d",&id);
	for(int i = 0;i<5;i++){
		if (id==i+1){
			printf ("moi nhap ten moi:");
			fflush(stdin);
			fgets(m[i].name,100,stdin);
			m[i].name[strcspn(m[i].name,"\n")]='\0';
			printf("moi nhap tuoi moi:");
			scanf ("%d",&m[i].age); 
		} else if (id>5){
			printf("khong co sinh vien theo yeu cau\n");
			return 1;
		}
	}
	printf("thong tin cua cac ban vua sua \n ");
	for(int i = 0;i<5;i++){
		printf("id cua ban la %d\n",i+1);
		printf("ten cua ban la %s\n",m[i].name);
		printf("tuoi la %d\n",m[i].age);
		printf("so dien thoai la %s\n",m[i].phone);
	}
	return 0;
}
