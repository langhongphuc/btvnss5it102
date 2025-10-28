#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap so nguyen a:");
	scanf("%d",&a);
	printf("Nhap so nguyen b:");
	scanf("%d",&b);
	
	if(a==0){
		if(b==0){
			printf("Phuong trinh vo so nghiem"); 
		} else{
			printf("Phuong trinh vo nghiem"); 
		} 
	} else{
		float x = (float)-b/a;
		printf("Phuong trinh co 1 nghiem x=%.2f",x); 
	} 
	return 0; 
} 
