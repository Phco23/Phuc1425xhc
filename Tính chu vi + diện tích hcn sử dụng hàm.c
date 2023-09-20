#include <stdio.h>

int chuvihcn(int a, int b);
int dientichhcn(int a, int b);

int main(){
	int width, high;
	int ketquacv, ketquadt;
	printf("Nhap vao chieu ngang: ");
	scanf("%d", &width);
	printf("Nhap vao chieu cao: ");
	scanf("%d", &high);
	ketquacv = chuvihcn(width , high);
	printf("\ntong chu vi hinh chu nhat la: %d", ketquacv);
	ketquadt = dientichhcn(width, high);
	printf("\ntong dien tich hinh chu nhat la: %d", ketquadt);
	
}

int chuvihcn(int a, int b){
	int z;
	z = (a + b)*2;
	return z;
}

int dientichhcn(int a, int b){
	int z;
	z = a * b;
	return z;
}
