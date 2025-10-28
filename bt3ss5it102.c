#include <stdio.h>
int main(){
	int number;
	printf("Nhap vao diem trung binh:");
	scanf("%f",&number);
	
	if(number>=8.0){
		printf("Hoc luc gioi"); 
	}else if(number>=6.5){
		printf("Hoc luc kha"); 
	} else if(number>=5.0){
		printf("Hoc luc trung binh"); 
	}else if(number<0 || number>10){
		printf("Khong hop le"); 
	}else{
		printf("Hoc luc yeu"); 
	} 
	
	return 0; 
} 
