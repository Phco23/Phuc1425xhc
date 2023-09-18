#include <stdio.h>

int main(){
	int arr[5];
	int min, max, i;
	int sum = 0;
	float avg;
	for(i=0;i < 5; i++){
		printf("Nhap so tuy chon trong ham [%d]: ", i + 1);
		scanf("%d", &arr[i]);
		sum = sum + arr[i];
	}
	min  = arr[0];
	max = arr[0];
	for(i = 0; i<5; i++){
		if(min>arr[i])
		min = arr[i];
		if(max<arr[i])
		max = arr[i];
	}
	avg = (float) sum/5;
	printf("\n tong 5 so: %d", sum);
	printf("\n so be nhat: %d", min);
	printf("\n so lon nhat: %d", max);
	printf("\n trung binh 5 so: %f", avg);
	
	for(i=4;i>=0;i--){
		printf("\n5 so mang nguoc lai trong mang: [%d]", arr[i]);
	}
}
