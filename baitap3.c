# include<stdio.h>
int main(){
	int n,mat_khau=2110;
	printf("mat khau co 4 chu so\n");
	printf("nhap mat khau: ");
	scanf("%d",&n);
	if(n>999&&n<10000){
	if(n==mat_khau){
	    printf("mat khau da chinh xac");
	    }else{
	    printf("mat khau khong chinh xac");	
		}
	}else{
		printf("loi");
	}
	return 0;
	}
