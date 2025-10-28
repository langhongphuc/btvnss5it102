#include <stdio.h> 
int main(){
	double thunhap, thue;
	printf("Nhap vao thu nhap cua ban (trieu dong):");
	scanf("%lf",&thunhap);
	
	if(thunhap <0 ){
		printf("Ban chua lam ra tien"); 
	}else{
		if(thunhap <= 5){
			thue = thunhap * 5/100; 
		}else if(thunhap <=10){
			thue = thunhap * 10/100; 
		}else{
			thue = thunhap * 15/100; 
		} 
	} 
	printf("So tien thue phai dong la: %.2f trieu dong\n",thue);
	
	return 0; 
} 
