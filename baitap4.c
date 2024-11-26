# include<stdio.h>
int main(){
	int a,b,c;
	float x,x1,x2,delta;
	printf("nhap a: ");
	scanf("%d",&a);
	printf("nhap b: ");
	scanf("%d",&b);
	printf("nhap c: ");
	scanf("%d",&c);
	if(a==0){
		printf("day khong phai phuong trinh bac 2");
	}else{
		delta=b*b-4*a*c;
		if(delta>0){
			printf("phuong trinh co 2 nghiem phan biet x1, x2 là: \n");
			x1=(-b+sqrt(delta))/2*a;
            x2=(-b-sqrt(delta))/2*a;
            printf("%.1f\n",x1);
            printf("%.1f\n",x2);
		}else if(delta==0){
			printf("phuong trinh co nghiem kep x là: \n");
			x= -b/2*a;
			printf("%.1f\n",x);
		}else{
			printf("phuong trinh vo nghiem");
		}
				
	}
			
     return 0;
	}
