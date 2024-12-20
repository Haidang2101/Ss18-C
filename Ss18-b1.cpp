#include<stdio.h>
#include<string.h>
int main(){
	struct Student{
		char name[100];
		int age;
		char phone[100];
	};
	struct Student user01={"Nguyen Hai Dang",21,"0947229045"};
	printf("ten cua ban la: %s\n",user01.name);
	printf("tuoi cua ban la: %d\n",user01.age);
	printf("SDT cua ban la: %s\n",user01.phone);
	return 0;
}
