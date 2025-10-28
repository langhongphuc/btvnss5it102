#include <stdio.h>
int main(){
	int a, b;
	printf("Nhap so nguyen a:");
	scanf("%d",&a);
	printf("Nhap so nguyen b:");
	scanf("%d",&b);
	
	if(a>b){
		printf("So lon hon la: a"); 
	} else if(a<b){
		printf("So lon hon la: b"); 
	} else{
		printf("Hai so bang nhau"); 
	} 
	return 0; 
} 
