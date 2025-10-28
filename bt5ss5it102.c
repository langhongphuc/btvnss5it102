#include <stdio.h> 
int main(){
	int tuoi;
	float gia_ve_phai_tra;
	
	prinf("Nhap vao tuoi hanh khach:");
	scanf("%d",&tuoi);
	
	if(tuoi<0 || tuoi>150){
		printf("Khong hop le"); 
	}else if(tuoi<6){
		gia_ve_phai_tra = 0; 
	}else if(tuoi>=6 && tuoi<=18){
		gia_ve_phai_tra = 20000 * 0.5; 
	}else if(tuoi>=19 && tuoi <=60){
	    gia_ve_phai_tra = 20000; 
	}else{
		gia_ve_phai_tra = 20000 * 0.7; 
	} 
	printf("So tien ve phai tra la: %d VND", gia_ve_phai_tra);
	
	return 0; 
}
